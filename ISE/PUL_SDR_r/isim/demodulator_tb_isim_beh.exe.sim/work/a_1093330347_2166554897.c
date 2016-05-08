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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/Phase_accumulator.vhd";



static void work_a_1093330347_2166554897_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned char t15;
    int t16;
    int t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(49, ng0);
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
LAB3:    t1 = (t0 + 3672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t1 = (t0 + 3768);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t6 = *((int *)t7);
    t2 = (t0 + 1352U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t6 + t13);
    t15 = (t14 >= 1390);
    if (t15 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t14 = (t6 + t13);
    t1 = (t0 + 3768);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1832U);
    t9 = *((char **)t2);
    t16 = *((int *)t9);
    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t17 = *((int *)t10);
    t18 = (t16 + t17);
    t19 = (t18 - 1390);
    t2 = (t0 + 3768);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t23) = t19;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_1093330347_2166554897_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1093330347_2166554897_init()
{
	static char *pe[] = {(void *)work_a_1093330347_2166554897_p_0,(void *)work_a_1093330347_2166554897_p_1};
	xsi_register_didat("work_a_1093330347_2166554897", "isim/demodulator_tb_isim_beh.exe.sim/work/a_1093330347_2166554897.didat");
	xsi_register_executes(pe);
}
