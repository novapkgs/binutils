/* Shared general utility routines for GDB, the GNU debugger.

   Copyright (C) 1986-2019 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

#include <string>
#include <vector>

#include "poison.h"

/* If possible, define FUNCTION_NAME, a macro containing the name of
   the function being defined.  Since this macro may not always be
   defined, all uses must be protected by appropriate macro definition
   checks (Eg: "#ifdef FUNCTION_NAME").

   Version 2.4 and later of GCC define a magical variable `__PRETTY_FUNCTION__'
   which contains the name of the function currently being defined.
   This is broken in G++ before version 2.6.
   C9x has a similar variable called __func__, but prefer the GCC one since
   it demangles C++ function names.  */
#if (GCC_VERSION >= 2004)
#define FUNCTION_NAME		__PRETTY_FUNCTION__
#else
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#define FUNCTION_NAME		__func__  /* ARI: func */
#endif
#endif

/* xmalloc(), xrealloc() and xcalloc() have already been declared in
   "libiberty.h". */

/* Like xmalloc, but zero the memory.  */
void *xzalloc (size_t);

template <typename T>
static void
xfree (T *ptr)
{
  static_assert (IsFreeable<T>::value, "Trying to use xfree with a non-POD \
data type.  Use operator delete instead.");

  if (ptr != NULL)
    free (ptr);		/* ARI: free */
}


/* Like asprintf and vasprintf, but return the string, throw an error
   if no memory.  */
char *xstrprintf (const char *format, ...) ATTRIBUTE_PRINTF (1, 2);
char *xstrvprintf (const char *format, va_list ap)
     ATTRIBUTE_PRINTF (1, 0);

/* Like snprintf, but throw an error if the output buffer is too small.  */
int xsnprintf (char *str, size_t size, const char *format, ...)
     ATTRIBUTE_PRINTF (3, 4);

/* Returns a std::string built from a printf-style format string.  */
std::string string_printf (const char* fmt, ...)
  ATTRIBUTE_PRINTF (1, 2);

/* Like string_printf, but takes a va_list.  */
std::string string_vprintf (const char* fmt, va_list args)
  ATTRIBUTE_PRINTF (1, 0);

/* Like string_printf, but appends to DEST instead of returning a new
   std::string.  */
void string_appendf (std::string &dest, const char* fmt, ...)
  ATTRIBUTE_PRINTF (2, 3);

/* Like string_appendf, but takes a va_list.  */
void string_vappendf (std::string &dest, const char* fmt, va_list args)
  ATTRIBUTE_PRINTF (2, 0);

/* Make a copy of the string at PTR with LEN characters
   (and add a null character at the end in the copy).
   Uses malloc to get the space.  Returns the address of the copy.  */

char *savestring (const char *ptr, size_t len);

/* The strerror() function can return NULL for errno values that are
   out of range.  Provide a "safe" version that always returns a
   printable string.  */

extern char *safe_strerror (int);

/* Return non-zero if the start of STRING matches PATTERN, zero
   otherwise.  */

static inline int
startswith (const char *string, const char *pattern)
{
  return strncmp (string, pattern, strlen (pattern)) == 0;
}

ULONGEST strtoulst (const char *num, const char **trailer, int base);

/* Skip leading whitespace characters in INP, returning an updated
   pointer.  If INP is NULL, return NULL.  */

extern char *skip_spaces (char *inp);

/* A const-correct version of the above.  */

extern const char *skip_spaces (const char *inp);

/* Skip leading non-whitespace characters in INP, returning an updated
   pointer.  If INP is NULL, return NULL.  */

extern char *skip_to_space (char *inp);

/* A const-correct version of the above.  */

extern const char *skip_to_space (const char *inp);

/* Assumes that V is an argv for a program, and iterates through
   freeing all the elements.  */
extern void free_vector_argv (std::vector<char *> &v);

/* Given a vector of arguments ARGV, return a string equivalent to
   joining all the arguments with a whitespace separating them.  */
extern std::string stringify_argv (const std::vector<char *> &argv);

/* Return true if VALUE is in [LOW, HIGH].  */

template <typename T>
static bool
in_inclusive_range (T value, T low, T high)
{
  return value >= low && value <= high;
}

/* Ensure that V is aligned to an N byte boundary (B's assumed to be a
   power of 2).  Round up/down when necessary.  Examples of correct
   use include:

    addr = align_up (addr, 8); -- VALUE needs 8 byte alignment
    write_memory (addr, value, len);
    addr += len;

   and:

    sp = align_down (sp - len, 16); -- Keep SP 16 byte aligned
    write_memory (sp, value, len);

   Note that uses such as:

    write_memory (addr, value, len);
    addr += align_up (len, 8);

   and:

    sp -= align_up (len, 8);
    write_memory (sp, value, len);

   are typically not correct as they don't ensure that the address (SP
   or ADDR) is correctly aligned (relying on previous alignment to
   keep things right).  This is also why the methods are called
   "align_..." instead of "round_..." as the latter reads better with
   this incorrect coding style.  */

extern ULONGEST align_up (ULONGEST v, int n);
extern ULONGEST align_down (ULONGEST v, int n);

#endif
