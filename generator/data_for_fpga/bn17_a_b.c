#include "bn17_a_b.h"
short * bn17_a_b( short in[BN17_A_B_FILT] ) {
in[0] = (short)(((2*((int)in[0]))+-134) >> 8);
in[0] = in[0] * ( in[0] > 0 );
in[1] = (short)(((2*((int)in[1]))+-1319) >> 8);
in[1] = in[1] * ( in[1] > 0 );
in[2] = (short)(((3*((int)in[2]))+-3242) >> 8);
in[2] = in[2] * ( in[2] > 0 );
in[3] = (short)(((3*((int)in[3]))+-125) >> 8);
in[3] = in[3] * ( in[3] > 0 );
in[4] = (short)(((3*((int)in[4]))+98) >> 8);
in[4] = in[4] * ( in[4] > 0 );
in[5] = (short)(((3*((int)in[5]))+430) >> 8);
in[5] = in[5] * ( in[5] > 0 );
in[6] = (short)(((2*((int)in[6]))+1160) >> 8);
in[6] = in[6] * ( in[6] > 0 );
in[7] = (short)(((3*((int)in[7]))+-244) >> 8);
in[7] = in[7] * ( in[7] > 0 );
in[8] = (short)(((2*((int)in[8]))+-1177) >> 8);
in[8] = in[8] * ( in[8] > 0 );
in[9] = (short)(((4*((int)in[9]))+-9) >> 8);
in[9] = in[9] * ( in[9] > 0 );
in[10] = (short)(((3*((int)in[10]))+-2088) >> 8);
in[10] = in[10] * ( in[10] > 0 );
in[11] = (short)(((3*((int)in[11]))+-619) >> 8);
in[11] = in[11] * ( in[11] > 0 );
in[12] = (short)(((3*((int)in[12]))+-427) >> 8);
in[12] = in[12] * ( in[12] > 0 );
in[13] = (short)(((2*((int)in[13]))+-313) >> 8);
in[13] = in[13] * ( in[13] > 0 );
in[14] = (short)(((2*((int)in[14]))+-1007) >> 8);
in[14] = in[14] * ( in[14] > 0 );
in[15] = (short)(((3*((int)in[15]))+-707) >> 8);
in[15] = in[15] * ( in[15] > 0 );
in[16] = (short)(((3*((int)in[16]))+855) >> 8);
in[16] = in[16] * ( in[16] > 0 );
in[17] = (short)(((2*((int)in[17]))+614) >> 8);
in[17] = in[17] * ( in[17] > 0 );
in[18] = (short)(((3*((int)in[18]))+879) >> 8);
in[18] = in[18] * ( in[18] > 0 );
in[19] = (short)(((3*((int)in[19]))+-729) >> 8);
in[19] = in[19] * ( in[19] > 0 );
in[20] = (short)(((3*((int)in[20]))+-1619) >> 8);
in[20] = in[20] * ( in[20] > 0 );
in[21] = (short)(((2*((int)in[21]))+-31) >> 8);
in[21] = in[21] * ( in[21] > 0 );
in[22] = (short)(((2*((int)in[22]))+-1970) >> 8);
in[22] = in[22] * ( in[22] > 0 );
in[23] = (short)(((3*((int)in[23]))+-322) >> 8);
in[23] = in[23] * ( in[23] > 0 );
in[24] = (short)(((2*((int)in[24]))+-2587) >> 8);
in[24] = in[24] * ( in[24] > 0 );
in[25] = (short)(((3*((int)in[25]))+-2686) >> 8);
in[25] = in[25] * ( in[25] > 0 );
in[26] = (short)(((4*((int)in[26]))+-346) >> 8);
in[26] = in[26] * ( in[26] > 0 );
in[27] = (short)(((3*((int)in[27]))+-1925) >> 8);
in[27] = in[27] * ( in[27] > 0 );
in[28] = (short)(((3*((int)in[28]))+103) >> 8);
in[28] = in[28] * ( in[28] > 0 );
in[29] = (short)(((4*((int)in[29]))+-5188) >> 8);
in[29] = in[29] * ( in[29] > 0 );
in[30] = (short)(((3*((int)in[30]))+454) >> 8);
in[30] = in[30] * ( in[30] > 0 );
in[31] = (short)(((3*((int)in[31]))+510) >> 8);
in[31] = in[31] * ( in[31] > 0 );
in[32] = (short)(((2*((int)in[32]))+-162) >> 8);
in[32] = in[32] * ( in[32] > 0 );
in[33] = (short)(((3*((int)in[33]))+1099) >> 8);
in[33] = in[33] * ( in[33] > 0 );
in[34] = (short)(((3*((int)in[34]))+-3808) >> 8);
in[34] = in[34] * ( in[34] > 0 );
in[35] = (short)(((3*((int)in[35]))+-1325) >> 8);
in[35] = in[35] * ( in[35] > 0 );
in[36] = (short)(((3*((int)in[36]))+-1737) >> 8);
in[36] = in[36] * ( in[36] > 0 );
in[37] = (short)(((3*((int)in[37]))+22) >> 8);
in[37] = in[37] * ( in[37] > 0 );
in[38] = (short)(((2*((int)in[38]))+-175) >> 8);
in[38] = in[38] * ( in[38] > 0 );
in[39] = (short)(((3*((int)in[39]))+-753) >> 8);
in[39] = in[39] * ( in[39] > 0 );
in[40] = (short)(((3*((int)in[40]))+1915) >> 8);
in[40] = in[40] * ( in[40] > 0 );
in[41] = (short)(((3*((int)in[41]))+-1471) >> 8);
in[41] = in[41] * ( in[41] > 0 );
in[42] = (short)(((3*((int)in[42]))+-1580) >> 8);
in[42] = in[42] * ( in[42] > 0 );
in[43] = (short)(((3*((int)in[43]))+-3086) >> 8);
in[43] = in[43] * ( in[43] > 0 );
in[44] = (short)(((3*((int)in[44]))+565) >> 8);
in[44] = in[44] * ( in[44] > 0 );
in[45] = (short)(((2*((int)in[45]))+-2081) >> 8);
in[45] = in[45] * ( in[45] > 0 );
in[46] = (short)(((3*((int)in[46]))+-1715) >> 8);
in[46] = in[46] * ( in[46] > 0 );
in[47] = (short)(((2*((int)in[47]))+-1360) >> 8);
in[47] = in[47] * ( in[47] > 0 );
in[48] = (short)(((3*((int)in[48]))+-3997) >> 8);
in[48] = in[48] * ( in[48] > 0 );
in[49] = (short)(((3*((int)in[49]))+-1329) >> 8);
in[49] = in[49] * ( in[49] > 0 );
in[50] = (short)(((3*((int)in[50]))+-1293) >> 8);
in[50] = in[50] * ( in[50] > 0 );
in[51] = (short)(((2*((int)in[51]))+-1968) >> 8);
in[51] = in[51] * ( in[51] > 0 );
in[52] = (short)(((2*((int)in[52]))+-592) >> 8);
in[52] = in[52] * ( in[52] > 0 );
in[53] = (short)(((3*((int)in[53]))+-604) >> 8);
in[53] = in[53] * ( in[53] > 0 );
in[54] = (short)(((4*((int)in[54]))+-4690) >> 8);
in[54] = in[54] * ( in[54] > 0 );
in[55] = (short)(((3*((int)in[55]))+-2826) >> 8);
in[55] = in[55] * ( in[55] > 0 );
in[56] = (short)(((4*((int)in[56]))+1100) >> 8);
in[56] = in[56] * ( in[56] > 0 );
in[57] = (short)(((2*((int)in[57]))+1206) >> 8);
in[57] = in[57] * ( in[57] > 0 );
in[58] = (short)(((2*((int)in[58]))+-69) >> 8);
in[58] = in[58] * ( in[58] > 0 );
in[59] = (short)(((3*((int)in[59]))+-1610) >> 8);
in[59] = in[59] * ( in[59] > 0 );
in[60] = (short)(((4*((int)in[60]))+-3241) >> 8);
in[60] = in[60] * ( in[60] > 0 );
in[61] = (short)(((4*((int)in[61]))+-6184) >> 8);
in[61] = in[61] * ( in[61] > 0 );
in[62] = (short)(((3*((int)in[62]))+-2779) >> 8);
in[62] = in[62] * ( in[62] > 0 );
in[63] = (short)(((2*((int)in[63]))+-1665) >> 8);
in[63] = in[63] * ( in[63] > 0 );
return in;
}