/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2018 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
    case 2:	/* sbc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
    case 4:	/* sbcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
    case 7:	/* adds */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
    case 10:	/* subs */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
    case 12:	/* add */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
    case 14:	/* adds */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
    case 17:	/* subs */
      value = 17;	/* --> subs.  */
      break;
    case 23:	/* cmn */
    case 22:	/* adds */
      value = 22;	/* --> adds.  */
      break;
    case 25:	/* neg */
    case 24:	/* sub */
      value = 24;	/* --> sub.  */
      break;
    case 27:	/* cmp */
    case 28:	/* negs */
    case 26:	/* subs */
      value = 26;	/* --> subs.  */
      break;
    case 153:	/* mov */
    case 152:	/* umov */
      value = 152;	/* --> umov.  */
      break;
    case 155:	/* mov */
    case 154:	/* ins */
      value = 154;	/* --> ins.  */
      break;
    case 157:	/* mov */
    case 156:	/* ins */
      value = 156;	/* --> ins.  */
      break;
    case 243:	/* mvn */
    case 242:	/* not */
      value = 242;	/* --> not.  */
      break;
    case 318:	/* mov */
    case 317:	/* orr */
      value = 317;	/* --> orr.  */
      break;
    case 389:	/* sxtl */
    case 388:	/* sshll */
      value = 388;	/* --> sshll.  */
      break;
    case 391:	/* sxtl2 */
    case 390:	/* sshll2 */
      value = 390;	/* --> sshll2.  */
      break;
    case 413:	/* uxtl */
    case 412:	/* ushll */
      value = 412;	/* --> ushll.  */
      break;
    case 415:	/* uxtl2 */
    case 414:	/* ushll2 */
      value = 414;	/* --> ushll2.  */
      break;
    case 536:	/* mov */
    case 535:	/* dup */
      value = 535;	/* --> dup.  */
      break;
    case 623:	/* sxtw */
    case 622:	/* sxth */
    case 621:	/* sxtb */
    case 624:	/* asr */
    case 620:	/* sbfx */
    case 619:	/* sbfiz */
    case 618:	/* sbfm */
      value = 618;	/* --> sbfm.  */
      break;
    case 627:	/* bfc */
    case 628:	/* bfxil */
    case 626:	/* bfi */
    case 625:	/* bfm */
      value = 625;	/* --> bfm.  */
      break;
    case 633:	/* uxth */
    case 632:	/* uxtb */
    case 635:	/* lsr */
    case 634:	/* lsl */
    case 631:	/* ubfx */
    case 630:	/* ubfiz */
    case 629:	/* ubfm */
      value = 629;	/* --> ubfm.  */
      break;
    case 665:	/* cset */
    case 664:	/* cinc */
    case 663:	/* csinc */
      value = 663;	/* --> csinc.  */
      break;
    case 668:	/* csetm */
    case 667:	/* cinv */
    case 666:	/* csinv */
      value = 666;	/* --> csinv.  */
      break;
    case 670:	/* cneg */
    case 669:	/* csneg */
      value = 669;	/* --> csneg.  */
      break;
    case 688:	/* rev */
    case 689:	/* rev64 */
      value = 688;	/* --> rev.  */
      break;
    case 714:	/* lsl */
    case 713:	/* lslv */
      value = 713;	/* --> lslv.  */
      break;
    case 716:	/* lsr */
    case 715:	/* lsrv */
      value = 715;	/* --> lsrv.  */
      break;
    case 718:	/* asr */
    case 717:	/* asrv */
      value = 717;	/* --> asrv.  */
      break;
    case 720:	/* ror */
    case 719:	/* rorv */
      value = 719;	/* --> rorv.  */
      break;
    case 723:	/* cmpp */
    case 722:	/* subps */
      value = 722;	/* --> subps.  */
      break;
    case 736:	/* mul */
    case 735:	/* madd */
      value = 735;	/* --> madd.  */
      break;
    case 738:	/* mneg */
    case 737:	/* msub */
      value = 737;	/* --> msub.  */
      break;
    case 740:	/* smull */
    case 739:	/* smaddl */
      value = 739;	/* --> smaddl.  */
      break;
    case 742:	/* smnegl */
    case 741:	/* smsubl */
      value = 741;	/* --> smsubl.  */
      break;
    case 745:	/* umull */
    case 744:	/* umaddl */
      value = 744;	/* --> umaddl.  */
      break;
    case 747:	/* umnegl */
    case 746:	/* umsubl */
      value = 746;	/* --> umsubl.  */
      break;
    case 758:	/* ror */
    case 757:	/* extr */
      value = 757;	/* --> extr.  */
      break;
    case 988:	/* bic */
    case 987:	/* and */
      value = 987;	/* --> and.  */
      break;
    case 990:	/* mov */
    case 989:	/* orr */
      value = 989;	/* --> orr.  */
      break;
    case 993:	/* tst */
    case 992:	/* ands */
      value = 992;	/* --> ands.  */
      break;
    case 998:	/* uxtw */
    case 997:	/* mov */
    case 996:	/* orr */
      value = 996;	/* --> orr.  */
      break;
    case 1000:	/* mvn */
    case 999:	/* orn */
      value = 999;	/* --> orn.  */
      break;
    case 1004:	/* tst */
    case 1003:	/* ands */
      value = 1003;	/* --> ands.  */
      break;
    case 1130:	/* staddb */
    case 1034:	/* ldaddb */
      value = 1034;	/* --> ldaddb.  */
      break;
    case 1131:	/* staddh */
    case 1035:	/* ldaddh */
      value = 1035;	/* --> ldaddh.  */
      break;
    case 1132:	/* stadd */
    case 1036:	/* ldadd */
      value = 1036;	/* --> ldadd.  */
      break;
    case 1133:	/* staddlb */
    case 1038:	/* ldaddlb */
      value = 1038;	/* --> ldaddlb.  */
      break;
    case 1134:	/* staddlh */
    case 1041:	/* ldaddlh */
      value = 1041;	/* --> ldaddlh.  */
      break;
    case 1135:	/* staddl */
    case 1044:	/* ldaddl */
      value = 1044;	/* --> ldaddl.  */
      break;
    case 1136:	/* stclrb */
    case 1046:	/* ldclrb */
      value = 1046;	/* --> ldclrb.  */
      break;
    case 1137:	/* stclrh */
    case 1047:	/* ldclrh */
      value = 1047;	/* --> ldclrh.  */
      break;
    case 1138:	/* stclr */
    case 1048:	/* ldclr */
      value = 1048;	/* --> ldclr.  */
      break;
    case 1139:	/* stclrlb */
    case 1050:	/* ldclrlb */
      value = 1050;	/* --> ldclrlb.  */
      break;
    case 1140:	/* stclrlh */
    case 1053:	/* ldclrlh */
      value = 1053;	/* --> ldclrlh.  */
      break;
    case 1141:	/* stclrl */
    case 1056:	/* ldclrl */
      value = 1056;	/* --> ldclrl.  */
      break;
    case 1142:	/* steorb */
    case 1058:	/* ldeorb */
      value = 1058;	/* --> ldeorb.  */
      break;
    case 1143:	/* steorh */
    case 1059:	/* ldeorh */
      value = 1059;	/* --> ldeorh.  */
      break;
    case 1144:	/* steor */
    case 1060:	/* ldeor */
      value = 1060;	/* --> ldeor.  */
      break;
    case 1145:	/* steorlb */
    case 1062:	/* ldeorlb */
      value = 1062;	/* --> ldeorlb.  */
      break;
    case 1146:	/* steorlh */
    case 1065:	/* ldeorlh */
      value = 1065;	/* --> ldeorlh.  */
      break;
    case 1147:	/* steorl */
    case 1068:	/* ldeorl */
      value = 1068;	/* --> ldeorl.  */
      break;
    case 1148:	/* stsetb */
    case 1070:	/* ldsetb */
      value = 1070;	/* --> ldsetb.  */
      break;
    case 1149:	/* stseth */
    case 1071:	/* ldseth */
      value = 1071;	/* --> ldseth.  */
      break;
    case 1150:	/* stset */
    case 1072:	/* ldset */
      value = 1072;	/* --> ldset.  */
      break;
    case 1151:	/* stsetlb */
    case 1074:	/* ldsetlb */
      value = 1074;	/* --> ldsetlb.  */
      break;
    case 1152:	/* stsetlh */
    case 1077:	/* ldsetlh */
      value = 1077;	/* --> ldsetlh.  */
      break;
    case 1153:	/* stsetl */
    case 1080:	/* ldsetl */
      value = 1080;	/* --> ldsetl.  */
      break;
    case 1154:	/* stsmaxb */
    case 1082:	/* ldsmaxb */
      value = 1082;	/* --> ldsmaxb.  */
      break;
    case 1155:	/* stsmaxh */
    case 1083:	/* ldsmaxh */
      value = 1083;	/* --> ldsmaxh.  */
      break;
    case 1156:	/* stsmax */
    case 1084:	/* ldsmax */
      value = 1084;	/* --> ldsmax.  */
      break;
    case 1157:	/* stsmaxlb */
    case 1086:	/* ldsmaxlb */
      value = 1086;	/* --> ldsmaxlb.  */
      break;
    case 1158:	/* stsmaxlh */
    case 1089:	/* ldsmaxlh */
      value = 1089;	/* --> ldsmaxlh.  */
      break;
    case 1159:	/* stsmaxl */
    case 1092:	/* ldsmaxl */
      value = 1092;	/* --> ldsmaxl.  */
      break;
    case 1160:	/* stsminb */
    case 1094:	/* ldsminb */
      value = 1094;	/* --> ldsminb.  */
      break;
    case 1161:	/* stsminh */
    case 1095:	/* ldsminh */
      value = 1095;	/* --> ldsminh.  */
      break;
    case 1162:	/* stsmin */
    case 1096:	/* ldsmin */
      value = 1096;	/* --> ldsmin.  */
      break;
    case 1163:	/* stsminlb */
    case 1098:	/* ldsminlb */
      value = 1098;	/* --> ldsminlb.  */
      break;
    case 1164:	/* stsminlh */
    case 1101:	/* ldsminlh */
      value = 1101;	/* --> ldsminlh.  */
      break;
    case 1165:	/* stsminl */
    case 1104:	/* ldsminl */
      value = 1104;	/* --> ldsminl.  */
      break;
    case 1166:	/* stumaxb */
    case 1106:	/* ldumaxb */
      value = 1106;	/* --> ldumaxb.  */
      break;
    case 1167:	/* stumaxh */
    case 1107:	/* ldumaxh */
      value = 1107;	/* --> ldumaxh.  */
      break;
    case 1168:	/* stumax */
    case 1108:	/* ldumax */
      value = 1108;	/* --> ldumax.  */
      break;
    case 1169:	/* stumaxlb */
    case 1110:	/* ldumaxlb */
      value = 1110;	/* --> ldumaxlb.  */
      break;
    case 1170:	/* stumaxlh */
    case 1113:	/* ldumaxlh */
      value = 1113;	/* --> ldumaxlh.  */
      break;
    case 1171:	/* stumaxl */
    case 1116:	/* ldumaxl */
      value = 1116;	/* --> ldumaxl.  */
      break;
    case 1172:	/* stuminb */
    case 1118:	/* lduminb */
      value = 1118;	/* --> lduminb.  */
      break;
    case 1173:	/* stuminh */
    case 1119:	/* lduminh */
      value = 1119;	/* --> lduminh.  */
      break;
    case 1174:	/* stumin */
    case 1120:	/* ldumin */
      value = 1120;	/* --> ldumin.  */
      break;
    case 1175:	/* stuminlb */
    case 1122:	/* lduminlb */
      value = 1122;	/* --> lduminlb.  */
      break;
    case 1176:	/* stuminlh */
    case 1125:	/* lduminlh */
      value = 1125;	/* --> lduminlh.  */
      break;
    case 1177:	/* stuminl */
    case 1128:	/* lduminl */
      value = 1128;	/* --> lduminl.  */
      break;
    case 1179:	/* mov */
    case 1178:	/* movn */
      value = 1178;	/* --> movn.  */
      break;
    case 1181:	/* mov */
    case 1180:	/* movz */
      value = 1180;	/* --> movz.  */
      break;
    case 1227:	/* autibsp */
    case 1226:	/* autibz */
    case 1225:	/* autiasp */
    case 1224:	/* autiaz */
    case 1223:	/* pacibsp */
    case 1222:	/* pacibz */
    case 1221:	/* paciasp */
    case 1220:	/* paciaz */
    case 1201:	/* psb */
    case 1200:	/* esb */
    case 1199:	/* autib1716 */
    case 1198:	/* autia1716 */
    case 1197:	/* pacib1716 */
    case 1196:	/* pacia1716 */
    case 1195:	/* xpaclri */
    case 1194:	/* sevl */
    case 1193:	/* sev */
    case 1192:	/* wfi */
    case 1191:	/* wfe */
    case 1190:	/* yield */
    case 1189:	/* bti */
    case 1188:	/* csdb */
    case 1187:	/* nop */
    case 1186:	/* hint */
      value = 1186;	/* --> hint.  */
      break;
    case 1205:	/* pssbb */
    case 1204:	/* ssbb */
    case 1203:	/* dsb */
      value = 1203;	/* --> dsb.  */
      break;
    case 1216:	/* cpp */
    case 1215:	/* dvp */
    case 1214:	/* cfp */
    case 1213:	/* tlbi */
    case 1212:	/* ic */
    case 1211:	/* dc */
    case 1210:	/* at */
    case 1209:	/* sys */
      value = 1209;	/* --> sys.  */
      break;
    case 2025:	/* bic */
    case 1275:	/* and */
      value = 1275;	/* --> and.  */
      break;
    case 1258:	/* mov */
    case 1277:	/* and */
      value = 1277;	/* --> and.  */
      break;
    case 1262:	/* movs */
    case 1278:	/* ands */
      value = 1278;	/* --> ands.  */
      break;
    case 2026:	/* cmple */
    case 1313:	/* cmpge */
      value = 1313;	/* --> cmpge.  */
      break;
    case 2029:	/* cmplt */
    case 1316:	/* cmpgt */
      value = 1316;	/* --> cmpgt.  */
      break;
    case 2027:	/* cmplo */
    case 1318:	/* cmphi */
      value = 1318;	/* --> cmphi.  */
      break;
    case 2028:	/* cmpls */
    case 1321:	/* cmphs */
      value = 1321;	/* --> cmphs.  */
      break;
    case 1255:	/* mov */
    case 1343:	/* cpy */
      value = 1343;	/* --> cpy.  */
      break;
    case 1257:	/* mov */
    case 1344:	/* cpy */
      value = 1344;	/* --> cpy.  */
      break;
    case 2036:	/* fmov */
    case 1260:	/* mov */
    case 1345:	/* cpy */
      value = 1345;	/* --> cpy.  */
      break;
    case 1250:	/* mov */
    case 1357:	/* dup */
      value = 1357;	/* --> dup.  */
      break;
    case 1252:	/* mov */
    case 1249:	/* mov */
    case 1358:	/* dup */
      value = 1358;	/* --> dup.  */
      break;
    case 2035:	/* fmov */
    case 1254:	/* mov */
    case 1359:	/* dup */
      value = 1359;	/* --> dup.  */
      break;
    case 1253:	/* mov */
    case 1360:	/* dupm */
      value = 1360;	/* --> dupm.  */
      break;
    case 2030:	/* eon */
    case 1362:	/* eor */
      value = 1362;	/* --> eor.  */
      break;
    case 1263:	/* not */
    case 1364:	/* eor */
      value = 1364;	/* --> eor.  */
      break;
    case 1264:	/* nots */
    case 1365:	/* eors */
      value = 1365;	/* --> eors.  */
      break;
    case 2031:	/* facle */
    case 1370:	/* facge */
      value = 1370;	/* --> facge.  */
      break;
    case 2032:	/* faclt */
    case 1371:	/* facgt */
      value = 1371;	/* --> facgt.  */
      break;
    case 2033:	/* fcmle */
    case 1384:	/* fcmge */
      value = 1384;	/* --> fcmge.  */
      break;
    case 2034:	/* fcmlt */
    case 1386:	/* fcmgt */
      value = 1386;	/* --> fcmgt.  */
      break;
    case 1247:	/* fmov */
    case 1392:	/* fcpy */
      value = 1392;	/* --> fcpy.  */
      break;
    case 1246:	/* fmov */
    case 1415:	/* fdup */
      value = 1415;	/* --> fdup.  */
      break;
    case 1248:	/* mov */
    case 1746:	/* orr */
      value = 1746;	/* --> orr.  */
      break;
    case 2037:	/* orn */
    case 1747:	/* orr */
      value = 1747;	/* --> orr.  */
      break;
    case 1251:	/* mov */
    case 1749:	/* orr */
      value = 1749;	/* --> orr.  */
      break;
    case 1261:	/* movs */
    case 1750:	/* orrs */
      value = 1750;	/* --> orrs.  */
      break;
    case 1256:	/* mov */
    case 1812:	/* sel */
      value = 1812;	/* --> sel.  */
      break;
    case 1259:	/* mov */
    case 1813:	/* sel */
      value = 1813;	/* --> sel.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

bfd_boolean
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst,
			   aarch64_operand_error *errors)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 193:
    case 196:
      return aarch64_ins_regno (self, info, code, inst, errors);
    case 13:
      return aarch64_ins_reg_extended (self, info, code, inst, errors);
    case 14:
      return aarch64_ins_reg_shifted (self, info, code, inst, errors);
    case 19:
      return aarch64_ins_ft (self, info, code, inst, errors);
    case 30:
    case 31:
    case 32:
    case 33:
    case 198:
      return aarch64_ins_reglane (self, info, code, inst, errors);
    case 34:
      return aarch64_ins_reglist (self, info, code, inst, errors);
    case 35:
      return aarch64_ins_ldst_reglist (self, info, code, inst, errors);
    case 36:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst, errors);
    case 37:
      return aarch64_ins_ldst_elemlist (self, info, code, inst, errors);
    case 38:
    case 39:
    case 40:
    case 41:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 78:
    case 79:
    case 80:
    case 81:
    case 156:
    case 158:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
      return aarch64_ins_imm (self, info, code, inst, errors);
    case 42:
    case 43:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst, errors);
    case 44:
    case 45:
    case 46:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst, errors);
    case 50:
    case 147:
      return aarch64_ins_fpimm (self, info, code, inst, errors);
    case 67:
    case 154:
      return aarch64_ins_limm (self, info, code, inst, errors);
    case 68:
      return aarch64_ins_aimm (self, info, code, inst, errors);
    case 69:
      return aarch64_ins_imm_half (self, info, code, inst, errors);
    case 70:
      return aarch64_ins_fbits (self, info, code, inst, errors);
    case 72:
    case 73:
    case 152:
      return aarch64_ins_imm_rotate2 (self, info, code, inst, errors);
    case 74:
    case 151:
      return aarch64_ins_imm_rotate1 (self, info, code, inst, errors);
    case 75:
    case 76:
      return aarch64_ins_cond (self, info, code, inst, errors);
    case 82:
    case 91:
      return aarch64_ins_addr_simple (self, info, code, inst, errors);
    case 83:
      return aarch64_ins_addr_regoff (self, info, code, inst, errors);
    case 84:
    case 85:
    case 86:
    case 88:
    case 90:
      return aarch64_ins_addr_simm (self, info, code, inst, errors);
    case 87:
      return aarch64_ins_addr_simm10 (self, info, code, inst, errors);
    case 89:
      return aarch64_ins_addr_uimm12 (self, info, code, inst, errors);
    case 92:
      return aarch64_ins_addr_offset (self, info, code, inst, errors);
    case 93:
      return aarch64_ins_simd_addr_post (self, info, code, inst, errors);
    case 94:
      return aarch64_ins_sysreg (self, info, code, inst, errors);
    case 95:
      return aarch64_ins_pstatefield (self, info, code, inst, errors);
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
      return aarch64_ins_sysins_op (self, info, code, inst, errors);
    case 101:
    case 102:
      return aarch64_ins_barrier (self, info, code, inst, errors);
    case 103:
      return aarch64_ins_prfop (self, info, code, inst, errors);
    case 104:
    case 105:
      return aarch64_ins_hint (self, info, code, inst, errors);
    case 106:
      return aarch64_ins_sve_addr_ri_s4 (self, info, code, inst, errors);
    case 107:
    case 108:
    case 109:
    case 110:
      return aarch64_ins_sve_addr_ri_s4xvl (self, info, code, inst, errors);
    case 111:
      return aarch64_ins_sve_addr_ri_s6xvl (self, info, code, inst, errors);
    case 112:
      return aarch64_ins_sve_addr_ri_s9xvl (self, info, code, inst, errors);
    case 113:
    case 114:
    case 115:
    case 116:
      return aarch64_ins_sve_addr_ri_u6 (self, info, code, inst, errors);
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
      return aarch64_ins_sve_addr_rr_lsl (self, info, code, inst, errors);
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
      return aarch64_ins_sve_addr_rz_xtw (self, info, code, inst, errors);
    case 138:
    case 139:
    case 140:
    case 141:
      return aarch64_ins_sve_addr_zi_u5 (self, info, code, inst, errors);
    case 142:
      return aarch64_ins_sve_addr_zz_lsl (self, info, code, inst, errors);
    case 143:
      return aarch64_ins_sve_addr_zz_sxtw (self, info, code, inst, errors);
    case 144:
      return aarch64_ins_sve_addr_zz_uxtw (self, info, code, inst, errors);
    case 145:
      return aarch64_ins_sve_aimm (self, info, code, inst, errors);
    case 146:
      return aarch64_ins_sve_asimm (self, info, code, inst, errors);
    case 148:
      return aarch64_ins_sve_float_half_one (self, info, code, inst, errors);
    case 149:
      return aarch64_ins_sve_float_half_two (self, info, code, inst, errors);
    case 150:
      return aarch64_ins_sve_float_zero_one (self, info, code, inst, errors);
    case 153:
      return aarch64_ins_inv_limm (self, info, code, inst, errors);
    case 155:
      return aarch64_ins_sve_limm_mov (self, info, code, inst, errors);
    case 157:
      return aarch64_ins_sve_scale (self, info, code, inst, errors);
    case 169:
    case 170:
      return aarch64_ins_sve_shlimm (self, info, code, inst, errors);
    case 171:
    case 172:
      return aarch64_ins_sve_shrimm (self, info, code, inst, errors);
    case 190:
    case 191:
    case 192:
      return aarch64_ins_sve_quad_index (self, info, code, inst, errors);
    case 194:
      return aarch64_ins_sve_index (self, info, code, inst, errors);
    case 195:
    case 197:
      return aarch64_ins_sve_reglist (self, info, code, inst, errors);
    default: assert (0); abort ();
    }
}
