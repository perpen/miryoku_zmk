// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_TOTEM)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_TOTEM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
         K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
         K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&kp ESC  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &key_repeat \
                   K32  K33  K34       K35  K36  K37

/*
 * q  w  f  p  b    j  l  u  y  '
   01 02 03 04 05   06 07 08 09 10
   a  r  s  t  g    m  n  e  i  o
   11 12 13 14 15   16 17 18 19 20
   z  x  c  d  v    k  h  ,  .  /
21 22 23 24 25 26   27 28 29 30 31 32
         33 34 35   36 37 38
 */

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 33 34
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 35 36

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_TOTEM
