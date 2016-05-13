/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/sin_LUT.vhd";
extern char *IEEE_P_1242562249;
extern char *WORK_P_4167035535;

char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);


static void work_a_4164329344_3627378042_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3752);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 3848);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t2 = ((WORK_P_4167035535) + 1168U);
    t6 = *((char **)t2);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t14 = *((int *)t7);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 1389, 1, t14);
    t17 = (4U * t16);
    t18 = (0 + t17);
    t2 = (t6 + t18);
    t19 = *((int *)t2);
    t8 = (t0 + 2208U);
    t9 = *((char **)t8);
    t20 = *((int *)t9);
    t8 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t13, t19, t20);
    t10 = (t13 + 12U);
    t21 = *((unsigned int *)t10);
    t21 = (t21 * 1U);
    t22 = (16U != t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    t23 = (t0 + 3848);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t8, 16U);
    xsi_driver_first_trans_fast(t23);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(16U, t21, 0);
    goto LAB11;

}

static void work_a_4164329344_3627378042_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 2208U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (15 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 15;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 15);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t14 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t1, t9);
    t11 = (t0 + 3912);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((int *)t18) = t14;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t19 = (t0 + 3768);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4164329344_3627378042_init()
{
	static char *pe[] = {(void *)work_a_4164329344_3627378042_p_0,(void *)work_a_4164329344_3627378042_p_1};
	xsi_register_didat("work_a_4164329344_3627378042", "isim/demodulator_tb_isim_beh.exe.sim/work/a_4164329344_3627378042.didat");
	xsi_register_executes(pe);
}
