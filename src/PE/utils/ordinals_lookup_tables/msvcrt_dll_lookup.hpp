/* Copyright 2017 - 2025 R. Thomas
 * Copyright 2017 - 2025 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_PE_MSVCRT_DLL_LOOKUP_H
#define LIEF_PE_MSVCRT_DLL_LOOKUP_H
#include <cstdint>

namespace LIEF {
namespace PE {

inline const char* msvcrt_dll_lookup(uint32_t i) {
  switch(i) {
  case 0x0038: return "$I10_OUTPUT";
  case 0x0001: return "??0__non_rtti_object@@QAE@ABV0@@Z";
  case 0x0002: return "??0__non_rtti_object@@QAE@PBD@Z";
  case 0x0003: return "??0bad_cast@@AAE@PBQBD@Z";
  case 0x0004: return "??0bad_cast@@QAE@ABQBD@Z";
  case 0x0005: return "??0bad_cast@@QAE@ABV0@@Z";
  case 0x0006: return "??0bad_cast@@QAE@PBD@Z";
  case 0x0007: return "??0bad_typeid@@QAE@ABV0@@Z";
  case 0x0008: return "??0bad_typeid@@QAE@PBD@Z";
  case 0x0009: return "??0exception@@QAE@ABQBD@Z";
  case 0x000a: return "??0exception@@QAE@ABV0@@Z";
  case 0x000b: return "??0exception@@QAE@XZ";
  case 0x000c: return "??1__non_rtti_object@@UAE@XZ";
  case 0x000d: return "??1bad_cast@@UAE@XZ";
  case 0x000e: return "??1bad_typeid@@UAE@XZ";
  case 0x000f: return "??1exception@@UAE@XZ";
  case 0x0010: return "??1type_info@@UAE@XZ";
  case 0x0011: return "??2@YAPAXI@Z";
  case 0x0012: return "??3@YAXPAX@Z";
  case 0x0013: return "??4__non_rtti_object@@QAEAAV0@ABV0@@Z";
  case 0x0014: return "??4bad_cast@@QAEAAV0@ABV0@@Z";
  case 0x0015: return "??4bad_typeid@@QAEAAV0@ABV0@@Z";
  case 0x0016: return "??4exception@@QAEAAV0@ABV0@@Z";
  case 0x0017: return "??8type_info@@QBEHABV0@@Z";
  case 0x0018: return "??9type_info@@QBEHABV0@@Z";
  case 0x0019: return "??_7__non_rtti_object@@6B@";
  case 0x001a: return "??_7bad_cast@@6B@";
  case 0x001b: return "??_7bad_typeid@@6B@";
  case 0x001c: return "??_7exception@@6B@";
  case 0x001d: return "??_E__non_rtti_object@@UAEPAXI@Z";
  case 0x001e: return "??_Ebad_cast@@UAEPAXI@Z";
  case 0x001f: return "??_Ebad_typeid@@UAEPAXI@Z";
  case 0x0020: return "??_Eexception@@UAEPAXI@Z";
  case 0x0021: return "??_Fbad_cast@@QAEXXZ";
  case 0x0022: return "??_Fbad_typeid@@QAEXXZ";
  case 0x0023: return "??_G__non_rtti_object@@UAEPAXI@Z";
  case 0x0024: return "??_Gbad_cast@@UAEPAXI@Z";
  case 0x0025: return "??_Gbad_typeid@@UAEPAXI@Z";
  case 0x0026: return "??_Gexception@@UAEPAXI@Z";
  case 0x0027: return "??_U@YAPAXI@Z";
  case 0x0028: return "??_V@YAXPAX@Z";
  case 0x002a: return "?_query_new_handler@@YAP6AHI@ZXZ";
  case 0x002b: return "?_query_new_mode@@YAHXZ";
  case 0x002c: return "?_set_new_handler@@YAP6AHI@ZP6AHI@Z@Z";
  case 0x002d: return "?_set_new_mode@@YAHH@Z";
  case 0x002e: return "?_set_se_translator@@YAP6AXIPAU_EXCEPTION_POINTERS@@@ZP6AXI0@Z@Z";
  case 0x002f: return "?before@type_info@@QBEHABV1@@Z";
  case 0x0030: return "?name@type_info@@QBEPBDXZ";
  case 0x0031: return "?raw_name@type_info@@QBEPBDXZ";
  case 0x0032: return "?set_new_handler@@YAP6AXXZP6AXXZ@Z";
  case 0x0033: return "?set_terminate@@YAP6AXXZP6AXXZ@Z";
  case 0x0034: return "?set_unexpected@@YAP6AXXZP6AXXZ@Z";
  case 0x0035: return "?terminate@@YAXXZ";
  case 0x0036: return "?unexpected@@YAXXZ";
  case 0x0037: return "?what@exception@@UBEPBDXZ";
  case 0x0039: return "_CIacos";
  case 0x003a: return "_CIasin";
  case 0x003b: return "_CIatan";
  case 0x003c: return "_CIatan2";
  case 0x003d: return "_CIcos";
  case 0x003e: return "_CIcosh";
  case 0x003f: return "_CIexp";
  case 0x0040: return "_CIfmod";
  case 0x0041: return "_CIlog";
  case 0x0042: return "_CIlog10";
  case 0x0043: return "_CIpow";
  case 0x0044: return "_CIsin";
  case 0x0045: return "_CIsinh";
  case 0x0046: return "_CIsqrt";
  case 0x0047: return "_CItan";
  case 0x0048: return "_CItanh";
  case 0x0049: return "_CxxThrowException";
  case 0x004a: return "_EH_prolog";
  case 0x004b: return "_Getdays";
  case 0x004c: return "_Getmonths";
  case 0x004d: return "_Gettnames";
  case 0x004e: return "_HUGE";
  case 0x004f: return "_Strftime";
  case 0x0050: return "_XcptFilter";
  case 0x0051: return "__CxxCallUnwindDtor";
  case 0x0052: return "__CxxDetectRethrow";
  case 0x0053: return "__CxxExceptionFilter";
  case 0x0054: return "__CxxFrameHandler";
  case 0x0055: return "__CxxLongjmpUnwind";
  case 0x0056: return "__CxxQueryExceptionSize";
  case 0x0057: return "__CxxRegisterExceptionObject";
  case 0x0058: return "__CxxUnregisterExceptionObject";
  case 0x0059: return "__DestructExceptionObject";
  case 0x005a: return "__RTCastToVoid";
  case 0x005b: return "__RTDynamicCast";
  case 0x005c: return "__RTtypeid";
  case 0x005d: return "__STRINGTOLD";
  case 0x005e: return "___lc_codepage_func";
  case 0x005f: return "___lc_handle_func";
  case 0x0060: return "___mb_cur_max_func";
  case 0x0061: return "___setlc_active_func";
  case 0x0062: return "___unguarded_readlc_active_add_func";
  case 0x0063: return "__argc";
  case 0x0064: return "__argv";
  case 0x0065: return "__badioinfo";
  case 0x0066: return "__crtCompareStringA";
  case 0x0067: return "__crtCompareStringW";
  case 0x0068: return "__crtGetLocaleInfoW";
  case 0x0069: return "__crtGetStringTypeW";
  case 0x006a: return "__crtLCMapStringA";
  case 0x006b: return "__crtLCMapStringW";
  case 0x006c: return "__dllonexit";
  case 0x006d: return "__doserrno";
  case 0x006e: return "__fpecode";
  case 0x006f: return "__getmainargs";
  case 0x0070: return "__initenv";
  case 0x0071: return "__iob_func";
  case 0x0072: return "__isascii";
  case 0x0073: return "__iscsym";
  case 0x0074: return "__iscsymf";
  case 0x0075: return "__lc_codepage";
  case 0x0076: return "__lc_collate_cp";
  case 0x0077: return "__lc_handle";
  case 0x0078: return "__lconv_init";
  case 0x0079: return "__mb_cur_max";
  case 0x007a: return "__p___argc";
  case 0x007b: return "__p___argv";
  case 0x007c: return "__p___initenv";
  case 0x007d: return "__p___mb_cur_max";
  case 0x007e: return "__p___wargv";
  case 0x007f: return "__p___winitenv";
  case 0x0080: return "__p__acmdln";
  case 0x0081: return "__p__amblksiz";
  case 0x0082: return "__p__commode";
  case 0x0083: return "__p__daylight";
  case 0x0084: return "__p__dstbias";
  case 0x0085: return "__p__environ";
  case 0x0086: return "__p__fileinfo";
  case 0x0087: return "__p__fmode";
  case 0x0088: return "__p__iob";
  case 0x0089: return "__p__mbcasemap";
  case 0x008a: return "__p__mbctype";
  case 0x008b: return "__p__osver";
  case 0x008c: return "__p__pctype";
  case 0x008d: return "__p__pgmptr";
  case 0x008e: return "__p__pwctype";
  case 0x008f: return "__p__timezone";
  case 0x0090: return "__p__tzname";
  case 0x0091: return "__p__wcmdln";
  case 0x0092: return "__p__wenviron";
  case 0x0093: return "__p__winmajor";
  case 0x0094: return "__p__winminor";
  case 0x0095: return "__p__winver";
  case 0x0096: return "__p__wpgmptr";
  case 0x0097: return "__pctype_func";
  case 0x0098: return "__pioinfo";
  case 0x0099: return "__pxcptinfoptrs";
  case 0x009a: return "__set_app_type";
  case 0x009b: return "__setlc_active";
  case 0x009c: return "__setusermatherr";
  case 0x009d: return "__threadhandle";
  case 0x009e: return "__threadid";
  case 0x009f: return "__toascii";
  case 0x00a0: return "__unDName";
  case 0x00a1: return "__unDNameEx";
  case 0x0029: return "__uncaught_exception";
  case 0x00a2: return "__unguarded_readlc_active";
  case 0x00a3: return "__wargv";
  case 0x00a4: return "__wcserror";
  case 0x00a5: return "__wgetmainargs";
  case 0x00a6: return "__winitenv";
  case 0x00a7: return "_abnormal_termination";
  case 0x00a8: return "_access";
  case 0x00a9: return "_acmdln";
  case 0x00aa: return "_adj_fdiv_m16i";
  case 0x00ab: return "_adj_fdiv_m32";
  case 0x00ac: return "_adj_fdiv_m32i";
  case 0x00ad: return "_adj_fdiv_m64";
  case 0x00ae: return "_adj_fdiv_r";
  case 0x00af: return "_adj_fdivr_m16i";
  case 0x00b0: return "_adj_fdivr_m32";
  case 0x00b1: return "_adj_fdivr_m32i";
  case 0x00b2: return "_adj_fdivr_m64";
  case 0x00b3: return "_adj_fpatan";
  case 0x00b4: return "_adj_fprem";
  case 0x00b5: return "_adj_fprem1";
  case 0x00b6: return "_adj_fptan";
  case 0x00b7: return "_adjust_fdiv";
  case 0x00b8: return "_aexit_rtn";
  case 0x00b9: return "_aligned_free";
  case 0x00ba: return "_aligned_malloc";
  case 0x00bb: return "_aligned_offset_malloc";
  case 0x00bc: return "_aligned_offset_realloc";
  case 0x00bd: return "_aligned_realloc";
  case 0x00be: return "_amsg_exit";
  case 0x00bf: return "_assert";
  case 0x00c0: return "_atodbl";
  case 0x00c1: return "_atoi64";
  case 0x00c2: return "_atoldbl";
  case 0x00c3: return "_beep";
  case 0x00c4: return "_beginthread";
  case 0x00c5: return "_beginthreadex";
  case 0x00c6: return "_c_exit";
  case 0x00c7: return "_cabs";
  case 0x00c8: return "_callnewh";
  case 0x00c9: return "_cexit";
  case 0x00ca: return "_cgets";
  case 0x00cb: return "_cgetws";
  case 0x00cc: return "_chdir";
  case 0x00cd: return "_chdrive";
  case 0x00ce: return "_chgsign";
  case 0x00cf: return "_chkesp";
  case 0x00d0: return "_chmod";
  case 0x00d1: return "_chsize";
  case 0x00d2: return "_clearfp";
  case 0x00d3: return "_close";
  case 0x00d4: return "_commit";
  case 0x00d5: return "_commode";
  case 0x00d6: return "_control87";
  case 0x00d7: return "_controlfp";
  case 0x00d8: return "_copysign";
  case 0x00d9: return "_cprintf";
  case 0x00da: return "_cputs";
  case 0x00db: return "_cputws";
  case 0x00dc: return "_creat";
  case 0x00dd: return "_cscanf";
  case 0x00de: return "_ctime64";
  case 0x00df: return "_ctype";
  case 0x00e0: return "_cwait";
  case 0x00e1: return "_cwprintf";
  case 0x00e2: return "_cwscanf";
  case 0x00e3: return "_daylight";
  case 0x00e4: return "_dstbias";
  case 0x00e5: return "_dup";
  case 0x00e6: return "_dup2";
  case 0x00e7: return "_ecvt";
  case 0x00e8: return "_endthread";
  case 0x00e9: return "_endthreadex";
  case 0x00ea: return "_environ";
  case 0x00eb: return "_eof";
  case 0x00ec: return "_errno";
  case 0x00ed: return "_except_handler2";
  case 0x00ee: return "_except_handler3";
  case 0x00ef: return "_execl";
  case 0x00f0: return "_execle";
  case 0x00f1: return "_execlp";
  case 0x00f2: return "_execlpe";
  case 0x00f3: return "_execv";
  case 0x00f4: return "_execve";
  case 0x00f5: return "_execvp";
  case 0x00f6: return "_execvpe";
  case 0x00f7: return "_exit";
  case 0x00f8: return "_expand";
  case 0x00f9: return "_fcloseall";
  case 0x00fa: return "_fcvt";
  case 0x00fb: return "_fdopen";
  case 0x00fc: return "_fgetchar";
  case 0x00fd: return "_fgetwchar";
  case 0x00fe: return "_filbuf";
  case 0x00ff: return "_fileinfo";
  case 0x0100: return "_filelength";
  case 0x0101: return "_filelengthi64";
  case 0x0102: return "_fileno";
  case 0x0103: return "_findclose";
  case 0x0104: return "_findfirst";
  case 0x0105: return "_findfirst64";
  case 0x0106: return "_findfirsti64";
  case 0x0107: return "_findnext";
  case 0x0108: return "_findnext64";
  case 0x0109: return "_findnexti64";
  case 0x010a: return "_finite";
  case 0x010b: return "_flsbuf";
  case 0x010c: return "_flushall";
  case 0x010d: return "_fmode";
  case 0x010e: return "_fpclass";
  case 0x010f: return "_fpieee_flt";
  case 0x0110: return "_fpreset";
  case 0x0111: return "_fputchar";
  case 0x0112: return "_fputwchar";
  case 0x0113: return "_fsopen";
  case 0x0114: return "_fstat";
  case 0x0115: return "_fstat64";
  case 0x0116: return "_fstati64";
  case 0x0117: return "_ftime";
  case 0x0118: return "_ftime64";
  case 0x0119: return "_ftol";
  case 0x011a: return "_fullpath";
  case 0x011b: return "_futime";
  case 0x011c: return "_futime64";
  case 0x011d: return "_gcvt";
  case 0x011e: return "_get_heap_handle";
  case 0x011f: return "_get_osfhandle";
  case 0x0120: return "_get_sbh_threshold";
  case 0x0121: return "_getch";
  case 0x0122: return "_getche";
  case 0x0123: return "_getcwd";
  case 0x0124: return "_getdcwd";
  case 0x0125: return "_getdiskfree";
  case 0x0126: return "_getdllprocaddr";
  case 0x0127: return "_getdrive";
  case 0x0128: return "_getdrives";
  case 0x0129: return "_getmaxstdio";
  case 0x012a: return "_getmbcp";
  case 0x012b: return "_getpid";
  case 0x012c: return "_getsystime";
  case 0x012d: return "_getw";
  case 0x012e: return "_getwch";
  case 0x012f: return "_getwche";
  case 0x0130: return "_getws";
  case 0x0131: return "_global_unwind2";
  case 0x0132: return "_gmtime64";
  case 0x0133: return "_heapadd";
  case 0x0134: return "_heapchk";
  case 0x0135: return "_heapmin";
  case 0x0136: return "_heapset";
  case 0x0137: return "_heapused";
  case 0x0138: return "_heapwalk";
  case 0x0139: return "_hypot";
  case 0x013a: return "_i64toa";
  case 0x013b: return "_i64tow";
  case 0x013c: return "_initterm";
  case 0x013d: return "_inp";
  case 0x013e: return "_inpd";
  case 0x013f: return "_inpw";
  case 0x0140: return "_iob";
  case 0x0141: return "_isatty";
  case 0x0142: return "_isctype";
  case 0x0143: return "_ismbbalnum";
  case 0x0144: return "_ismbbalpha";
  case 0x0145: return "_ismbbgraph";
  case 0x0146: return "_ismbbkalnum";
  case 0x0147: return "_ismbbkana";
  case 0x0148: return "_ismbbkprint";
  case 0x0149: return "_ismbbkpunct";
  case 0x014a: return "_ismbblead";
  case 0x014b: return "_ismbbprint";
  case 0x014c: return "_ismbbpunct";
  case 0x014d: return "_ismbbtrail";
  case 0x014e: return "_ismbcalnum";
  case 0x014f: return "_ismbcalpha";
  case 0x0150: return "_ismbcdigit";
  case 0x0151: return "_ismbcgraph";
  case 0x0152: return "_ismbchira";
  case 0x0153: return "_ismbckata";
  case 0x0154: return "_ismbcl0";
  case 0x0155: return "_ismbcl1";
  case 0x0156: return "_ismbcl2";
  case 0x0157: return "_ismbclegal";
  case 0x0158: return "_ismbclower";
  case 0x0159: return "_ismbcprint";
  case 0x015a: return "_ismbcpunct";
  case 0x015b: return "_ismbcspace";
  case 0x015c: return "_ismbcsymbol";
  case 0x015d: return "_ismbcupper";
  case 0x015e: return "_ismbslead";
  case 0x015f: return "_ismbstrail";
  case 0x0160: return "_isnan";
  case 0x0161: return "_itoa";
  case 0x0162: return "_itow";
  case 0x0163: return "_j0";
  case 0x0164: return "_j1";
  case 0x0165: return "_jn";
  case 0x0166: return "_kbhit";
  case 0x0167: return "_lfind";
  case 0x0168: return "_loaddll";
  case 0x0169: return "_local_unwind2";
  case 0x016a: return "_localtime64";
  case 0x016b: return "_lock";
  case 0x016c: return "_locking";
  case 0x016d: return "_logb";
  case 0x016e: return "_longjmpex";
  case 0x016f: return "_lrotl";
  case 0x0170: return "_lrotr";
  case 0x0171: return "_lsearch";
  case 0x0172: return "_lseek";
  case 0x0173: return "_lseeki64";
  case 0x0174: return "_ltoa";
  case 0x0175: return "_ltow";
  case 0x0176: return "_makepath";
  case 0x0177: return "_mbbtombc";
  case 0x0178: return "_mbbtype";
  case 0x0179: return "_mbcasemap";
  case 0x017a: return "_mbccpy";
  case 0x017b: return "_mbcjistojms";
  case 0x017c: return "_mbcjmstojis";
  case 0x017d: return "_mbclen";
  case 0x017e: return "_mbctohira";
  case 0x017f: return "_mbctokata";
  case 0x0180: return "_mbctolower";
  case 0x0181: return "_mbctombb";
  case 0x0182: return "_mbctoupper";
  case 0x0183: return "_mbctype";
  case 0x0184: return "_mbsbtype";
  case 0x0185: return "_mbscat";
  case 0x0186: return "_mbschr";
  case 0x0187: return "_mbscmp";
  case 0x0188: return "_mbscoll";
  case 0x0189: return "_mbscpy";
  case 0x018a: return "_mbscspn";
  case 0x018b: return "_mbsdec";
  case 0x018c: return "_mbsdup";
  case 0x018d: return "_mbsicmp";
  case 0x018e: return "_mbsicoll";
  case 0x018f: return "_mbsinc";
  case 0x0190: return "_mbslen";
  case 0x0191: return "_mbslwr";
  case 0x0192: return "_mbsnbcat";
  case 0x0193: return "_mbsnbcmp";
  case 0x0194: return "_mbsnbcnt";
  case 0x0195: return "_mbsnbcoll";
  case 0x0196: return "_mbsnbcpy";
  case 0x0197: return "_mbsnbicmp";
  case 0x0198: return "_mbsnbicoll";
  case 0x0199: return "_mbsnbset";
  case 0x019a: return "_mbsncat";
  case 0x019b: return "_mbsnccnt";
  case 0x019c: return "_mbsncmp";
  case 0x019d: return "_mbsncoll";
  case 0x019e: return "_mbsncpy";
  case 0x019f: return "_mbsnextc";
  case 0x01a0: return "_mbsnicmp";
  case 0x01a1: return "_mbsnicoll";
  case 0x01a2: return "_mbsninc";
  case 0x01a3: return "_mbsnset";
  case 0x01a4: return "_mbspbrk";
  case 0x01a5: return "_mbsrchr";
  case 0x01a6: return "_mbsrev";
  case 0x01a7: return "_mbsset";
  case 0x01a8: return "_mbsspn";
  case 0x01a9: return "_mbsspnp";
  case 0x01aa: return "_mbsstr";
  case 0x01ab: return "_mbstok";
  case 0x01ac: return "_mbstrlen";
  case 0x01ad: return "_mbsupr";
  case 0x01ae: return "_memccpy";
  case 0x01af: return "_memicmp";
  case 0x01b0: return "_mkdir";
  case 0x01b1: return "_mktemp";
  case 0x01b2: return "_mktime64";
  case 0x01b3: return "_msize";
  case 0x01b4: return "_nextafter";
  case 0x01b5: return "_onexit";
  case 0x01b6: return "_open";
  case 0x01b7: return "_open_osfhandle";
  case 0x01b8: return "_osplatform";
  case 0x01b9: return "_osver";
  case 0x01ba: return "_outp";
  case 0x01bb: return "_outpd";
  case 0x01bc: return "_outpw";
  case 0x01bd: return "_pclose";
  case 0x01be: return "_pctype";
  case 0x01bf: return "_pgmptr";
  case 0x01c0: return "_pipe";
  case 0x01c1: return "_popen";
  case 0x01c2: return "_purecall";
  case 0x01c3: return "_putch";
  case 0x01c4: return "_putenv";
  case 0x01c5: return "_putw";
  case 0x01c6: return "_putwch";
  case 0x01c7: return "_putws";
  case 0x01c8: return "_pwctype";
  case 0x01c9: return "_read";
  case 0x01ca: return "_resetstkoflw";
  case 0x01cb: return "_rmdir";
  case 0x01cc: return "_rmtmp";
  case 0x01cd: return "_rotl";
  case 0x01ce: return "_rotr";
  case 0x01cf: return "_safe_fdiv";
  case 0x01d0: return "_safe_fdivr";
  case 0x01d1: return "_safe_fprem";
  case 0x01d2: return "_safe_fprem1";
  case 0x01d3: return "_scalb";
  case 0x01d4: return "_scprintf";
  case 0x01d5: return "_scwprintf";
  case 0x01d6: return "_searchenv";
  case 0x01d7: return "_seh_longjmp_unwind";
  case 0x01d8: return "_set_SSE2_enable";
  case 0x01d9: return "_set_error_mode";
  case 0x01da: return "_set_sbh_threshold";
  case 0x01db: return "_seterrormode";
  case 0x01dc: return "_setjmp";
  case 0x01dd: return "_setjmp3";
  case 0x01de: return "_setmaxstdio";
  case 0x01df: return "_setmbcp";
  case 0x01e0: return "_setmode";
  case 0x01e1: return "_setsystime";
  case 0x01e2: return "_sleep";
  case 0x01e3: return "_snprintf";
  case 0x01e4: return "_snscanf";
  case 0x01e5: return "_snwprintf";
  case 0x01e6: return "_snwscanf";
  case 0x01e7: return "_sopen";
  case 0x01e8: return "_spawnl";
  case 0x01e9: return "_spawnle";
  case 0x01ea: return "_spawnlp";
  case 0x01eb: return "_spawnlpe";
  case 0x01ec: return "_spawnv";
  case 0x01ed: return "_spawnve";
  case 0x01ee: return "_spawnvp";
  case 0x01ef: return "_spawnvpe";
  case 0x01f0: return "_splitpath";
  case 0x01f1: return "_stat";
  case 0x01f2: return "_stat64";
  case 0x01f3: return "_stati64";
  case 0x01f4: return "_statusfp";
  case 0x01f5: return "_strcmpi";
  case 0x01f6: return "_strdate";
  case 0x01f7: return "_strdup";
  case 0x01f8: return "_strerror";
  case 0x01f9: return "_stricmp";
  case 0x01fa: return "_stricoll";
  case 0x01fb: return "_strlwr";
  case 0x01fc: return "_strncoll";
  case 0x01fd: return "_strnicmp";
  case 0x01fe: return "_strnicoll";
  case 0x01ff: return "_strnset";
  case 0x0200: return "_strrev";
  case 0x0201: return "_strset";
  case 0x0202: return "_strtime";
  case 0x0203: return "_strtoi64";
  case 0x0204: return "_strtoui64";
  case 0x0205: return "_strupr";
  case 0x0206: return "_swab";
  case 0x0207: return "_sys_errlist";
  case 0x0208: return "_sys_nerr";
  case 0x0209: return "_tell";
  case 0x020a: return "_telli64";
  case 0x020b: return "_tempnam";
  case 0x020c: return "_time64";
  case 0x020d: return "_timezone";
  case 0x020e: return "_tolower";
  case 0x020f: return "_toupper";
  case 0x0210: return "_tzname";
  case 0x0211: return "_tzset";
  case 0x0212: return "_ui64toa";
  case 0x0213: return "_ui64tow";
  case 0x0214: return "_ultoa";
  case 0x0215: return "_ultow";
  case 0x0216: return "_umask";
  case 0x0217: return "_ungetch";
  case 0x0218: return "_ungetwch";
  case 0x0219: return "_unlink";
  case 0x021a: return "_unloaddll";
  case 0x021b: return "_unlock";
  case 0x021c: return "_utime";
  case 0x021d: return "_utime64";
  case 0x021e: return "_vscprintf";
  case 0x021f: return "_vscwprintf";
  case 0x0220: return "_vsnprintf";
  case 0x0221: return "_vsnwprintf";
  case 0x0222: return "_waccess";
  case 0x0223: return "_wasctime";
  case 0x0224: return "_wchdir";
  case 0x0225: return "_wchmod";
  case 0x0226: return "_wcmdln";
  case 0x0227: return "_wcreat";
  case 0x0228: return "_wcsdup";
  case 0x0229: return "_wcserror";
  case 0x022a: return "_wcsicmp";
  case 0x022b: return "_wcsicoll";
  case 0x022c: return "_wcslwr";
  case 0x022d: return "_wcsncoll";
  case 0x022e: return "_wcsnicmp";
  case 0x022f: return "_wcsnicoll";
  case 0x0230: return "_wcsnset";
  case 0x0231: return "_wcsrev";
  case 0x0232: return "_wcsset";
  case 0x0233: return "_wcstoi64";
  case 0x0234: return "_wcstoui64";
  case 0x0235: return "_wcsupr";
  case 0x0236: return "_wctime";
  case 0x0237: return "_wctime64";
  case 0x0238: return "_wenviron";
  case 0x0239: return "_wexecl";
  case 0x023a: return "_wexecle";
  case 0x023b: return "_wexeclp";
  case 0x023c: return "_wexeclpe";
  case 0x023d: return "_wexecv";
  case 0x023e: return "_wexecve";
  case 0x023f: return "_wexecvp";
  case 0x0240: return "_wexecvpe";
  case 0x0241: return "_wfdopen";
  case 0x0242: return "_wfindfirst";
  case 0x0243: return "_wfindfirst64";
  case 0x0244: return "_wfindfirsti64";
  case 0x0245: return "_wfindnext";
  case 0x0246: return "_wfindnext64";
  case 0x0247: return "_wfindnexti64";
  case 0x0248: return "_wfopen";
  case 0x0249: return "_wfreopen";
  case 0x024a: return "_wfsopen";
  case 0x024b: return "_wfullpath";
  case 0x024c: return "_wgetcwd";
  case 0x024d: return "_wgetdcwd";
  case 0x024e: return "_wgetenv";
  case 0x024f: return "_winmajor";
  case 0x0250: return "_winminor";
  case 0x0251: return "_winver";
  case 0x0252: return "_wmakepath";
  case 0x0253: return "_wmkdir";
  case 0x0254: return "_wmktemp";
  case 0x0255: return "_wopen";
  case 0x0256: return "_wperror";
  case 0x0257: return "_wpgmptr";
  case 0x0258: return "_wpopen";
  case 0x0259: return "_wputenv";
  case 0x025a: return "_wremove";
  case 0x025b: return "_wrename";
  case 0x025c: return "_write";
  case 0x025d: return "_wrmdir";
  case 0x025e: return "_wsearchenv";
  case 0x025f: return "_wsetlocale";
  case 0x0260: return "_wsopen";
  case 0x0261: return "_wspawnl";
  case 0x0262: return "_wspawnle";
  case 0x0263: return "_wspawnlp";
  case 0x0264: return "_wspawnlpe";
  case 0x0265: return "_wspawnv";
  case 0x0266: return "_wspawnve";
  case 0x0267: return "_wspawnvp";
  case 0x0268: return "_wspawnvpe";
  case 0x0269: return "_wsplitpath";
  case 0x026a: return "_wstat";
  case 0x026b: return "_wstat64";
  case 0x026c: return "_wstati64";
  case 0x026d: return "_wstrdate";
  case 0x026e: return "_wstrtime";
  case 0x026f: return "_wsystem";
  case 0x0270: return "_wtempnam";
  case 0x0271: return "_wtmpnam";
  case 0x0272: return "_wtof";
  case 0x0273: return "_wtoi";
  case 0x0274: return "_wtoi64";
  case 0x0275: return "_wtol";
  case 0x0276: return "_wunlink";
  case 0x0277: return "_wutime";
  case 0x0278: return "_wutime64";
  case 0x0279: return "_y0";
  case 0x027a: return "_y1";
  case 0x027b: return "_yn";
  case 0x027c: return "abort";
  case 0x027d: return "abs";
  case 0x027e: return "acos";
  case 0x027f: return "asctime";
  case 0x0280: return "asin";
  case 0x0281: return "atan";
  case 0x0282: return "atan2";
  case 0x0283: return "atexit";
  case 0x0284: return "atof";
  case 0x0285: return "atoi";
  case 0x0286: return "atol";
  case 0x0287: return "bsearch";
  case 0x0288: return "calloc";
  case 0x0289: return "ceil";
  case 0x028a: return "clearerr";
  case 0x028b: return "clock";
  case 0x028c: return "cos";
  case 0x028d: return "cosh";
  case 0x028e: return "ctime";
  case 0x028f: return "difftime";
  case 0x0290: return "div";
  case 0x0291: return "exit";
  case 0x0292: return "exp";
  case 0x0293: return "fabs";
  case 0x0294: return "fclose";
  case 0x0295: return "feof";
  case 0x0296: return "ferror";
  case 0x0297: return "fflush";
  case 0x0298: return "fgetc";
  case 0x0299: return "fgetpos";
  case 0x029a: return "fgets";
  case 0x029b: return "fgetwc";
  case 0x029c: return "fgetws";
  case 0x029d: return "floor";
  case 0x029e: return "fmod";
  case 0x029f: return "fopen";
  case 0x02a0: return "fprintf";
  case 0x02a1: return "fputc";
  case 0x02a2: return "fputs";
  case 0x02a3: return "fputwc";
  case 0x02a4: return "fputws";
  case 0x02a5: return "fread";
  case 0x02a6: return "free";
  case 0x02a7: return "freopen";
  case 0x02a8: return "frexp";
  case 0x02a9: return "fscanf";
  case 0x02aa: return "fseek";
  case 0x02ab: return "fsetpos";
  case 0x02ac: return "ftell";
  case 0x02ad: return "fwprintf";
  case 0x02ae: return "fwrite";
  case 0x02af: return "fwscanf";
  case 0x02b0: return "getc";
  case 0x02b1: return "getchar";
  case 0x02b2: return "getenv";
  case 0x02b3: return "gets";
  case 0x02b4: return "getwc";
  case 0x02b5: return "getwchar";
  case 0x02b6: return "gmtime";
  case 0x02b7: return "is_wctype";
  case 0x02b8: return "isalnum";
  case 0x02b9: return "isalpha";
  case 0x02ba: return "iscntrl";
  case 0x02bb: return "isdigit";
  case 0x02bc: return "isgraph";
  case 0x02bd: return "isleadbyte";
  case 0x02be: return "islower";
  case 0x02bf: return "isprint";
  case 0x02c0: return "ispunct";
  case 0x02c1: return "isspace";
  case 0x02c2: return "isupper";
  case 0x02c3: return "iswalnum";
  case 0x02c4: return "iswalpha";
  case 0x02c5: return "iswascii";
  case 0x02c6: return "iswcntrl";
  case 0x02c7: return "iswctype";
  case 0x02c8: return "iswdigit";
  case 0x02c9: return "iswgraph";
  case 0x02ca: return "iswlower";
  case 0x02cb: return "iswprint";
  case 0x02cc: return "iswpunct";
  case 0x02cd: return "iswspace";
  case 0x02ce: return "iswupper";
  case 0x02cf: return "iswxdigit";
  case 0x02d0: return "isxdigit";
  case 0x02d1: return "labs";
  case 0x02d2: return "ldexp";
  case 0x02d3: return "ldiv";
  case 0x02d4: return "localeconv";
  case 0x02d5: return "localtime";
  case 0x02d6: return "log";
  case 0x02d7: return "log10";
  case 0x02d8: return "longjmp";
  case 0x02d9: return "malloc";
  case 0x02da: return "mblen";
  case 0x02db: return "mbstowcs";
  case 0x02dc: return "mbtowc";
  case 0x02dd: return "memchr";
  case 0x02de: return "memcmp";
  case 0x02df: return "memcpy";
  case 0x02e0: return "memmove";
  case 0x02e1: return "memset";
  case 0x02e2: return "mktime";
  case 0x02e3: return "modf";
  case 0x02e4: return "perror";
  case 0x02e5: return "pow";
  case 0x02e6: return "printf";
  case 0x02e7: return "putc";
  case 0x02e8: return "putchar";
  case 0x02e9: return "puts";
  case 0x02ea: return "putwc";
  case 0x02eb: return "putwchar";
  case 0x02ec: return "qsort";
  case 0x02ed: return "raise";
  case 0x02ee: return "rand";
  case 0x02ef: return "realloc";
  case 0x02f0: return "remove";
  case 0x02f1: return "rename";
  case 0x02f2: return "rewind";
  case 0x02f3: return "scanf";
  case 0x02f4: return "setbuf";
  case 0x02f5: return "setlocale";
  case 0x02f6: return "setvbuf";
  case 0x02f7: return "signal";
  case 0x02f8: return "sin";
  case 0x02f9: return "sinh";
  case 0x02fa: return "sprintf";
  case 0x02fb: return "sqrt";
  case 0x02fc: return "srand";
  case 0x02fd: return "sscanf";
  case 0x02fe: return "strcat";
  case 0x02ff: return "strchr";
  case 0x0300: return "strcmp";
  case 0x0301: return "strcoll";
  case 0x0302: return "strcpy";
  case 0x0303: return "strcspn";
  case 0x0304: return "strerror";
  case 0x0305: return "strftime";
  case 0x0306: return "strlen";
  case 0x0307: return "strncat";
  case 0x0308: return "strncmp";
  case 0x0309: return "strncpy";
  case 0x030a: return "strpbrk";
  case 0x030b: return "strrchr";
  case 0x030c: return "strspn";
  case 0x030d: return "strstr";
  case 0x030e: return "strtod";
  case 0x030f: return "strtok";
  case 0x0310: return "strtol";
  case 0x0311: return "strtoul";
  case 0x0312: return "strxfrm";
  case 0x0313: return "swprintf";
  case 0x0314: return "swscanf";
  case 0x0315: return "system";
  case 0x0316: return "tan";
  case 0x0317: return "tanh";
  case 0x0318: return "time";
  case 0x0319: return "tmpfile";
  case 0x031a: return "tmpnam";
  case 0x031b: return "tolower";
  case 0x031c: return "toupper";
  case 0x031d: return "towlower";
  case 0x031e: return "towupper";
  case 0x031f: return "ungetc";
  case 0x0320: return "ungetwc";
  case 0x0321: return "vfprintf";
  case 0x0322: return "vfwprintf";
  case 0x0323: return "vprintf";
  case 0x0324: return "vsprintf";
  case 0x0325: return "vswprintf";
  case 0x0326: return "vwprintf";
  case 0x0327: return "wcscat";
  case 0x0328: return "wcschr";
  case 0x0329: return "wcscmp";
  case 0x032a: return "wcscoll";
  case 0x032b: return "wcscpy";
  case 0x032c: return "wcscspn";
  case 0x032d: return "wcsftime";
  case 0x032e: return "wcslen";
  case 0x032f: return "wcsncat";
  case 0x0330: return "wcsncmp";
  case 0x0331: return "wcsncpy";
  case 0x0332: return "wcspbrk";
  case 0x0333: return "wcsrchr";
  case 0x0334: return "wcsspn";
  case 0x0335: return "wcsstr";
  case 0x0336: return "wcstod";
  case 0x0337: return "wcstok";
  case 0x0338: return "wcstol";
  case 0x0339: return "wcstombs";
  case 0x033a: return "wcstoul";
  case 0x033b: return "wcsxfrm";
  case 0x033c: return "wctomb";
  case 0x033d: return "wprintf";
  case 0x033e: return "wscanf";
  }
  return nullptr;
}


}
}

#endif

