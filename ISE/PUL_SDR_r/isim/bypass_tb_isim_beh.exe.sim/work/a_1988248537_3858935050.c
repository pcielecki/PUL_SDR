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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/ADC_control.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1988248537_3858935050_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14};

LAB0:    xsi_set_current_line(59, ng0);
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
LAB3:    t1 = (t0 + 5088);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 5216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t12 = *((unsigned char *)t8);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB10;

LAB12:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t19 = (t18 + 1);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t19 = (1 - 1);
    t3 = (t18 >= t19);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB10;

LAB13:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t19 = (t18 + 1);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t1 = (t0 + 2688U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t20 = (t19 - 1);
    t3 = (t18 >= t20);
    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB10;

LAB14:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t0 + 3048U);
    t6 = *((char **)t1);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t21 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 25, 1, t18);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t1 = (t5 + t23);
    *((unsigned char *)t1) = t3;
    t7 = (t0 + 2872U);
    xsi_variable_act(t7);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t19 = (t18 + 1);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t19 = (2 * 12);
    t20 = (t19 + 2);
    t3 = (t18 >= t20);
    if (t3 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB10;

LAB15:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 5216);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB16;

LAB18:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB19;

LAB21:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5216);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB22;

LAB24:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 5216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB25;

}

static void work_a_1988248537_3858935050_p_1(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5280);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5104);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5280);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1988248537_3858935050_p_2(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5344);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5120);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5344);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1988248537_3858935050_p_3(char *t0)
{
    char t16[16];
    char t18[16];
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t24;
    int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t31 = (t0 + 5136);
    *((int *)t31) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t6 = (0 - 0);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 2928U);
    t10 = *((char **)t9);
    t11 = (12 + 2);
    t12 = (t11 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t17 = ((IEEE_P_2592010699) + 4000);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 11;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (11 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t23 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 14;
    t24 = (t20 + 4U);
    *((int *)t24) = 25;
    t24 = (t20 + 8U);
    *((int *)t24) = 1;
    t25 = (25 - 14);
    t22 = (t25 * 1);
    t22 = (t22 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t1, t18, (char)97, t9, t23, (char)101);
    t22 = (12U + 12U);
    t26 = (24U != t22);
    if (t26 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 5408);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t15, 24U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB5:    xsi_size_not_matching(24U, t22, 0);
    goto LAB6;

}


extern void work_a_1988248537_3858935050_init()
{
	static char *pe[] = {(void *)work_a_1988248537_3858935050_p_0,(void *)work_a_1988248537_3858935050_p_1,(void *)work_a_1988248537_3858935050_p_2,(void *)work_a_1988248537_3858935050_p_3};
	xsi_register_didat("work_a_1988248537_3858935050", "isim/bypass_tb_isim_beh.exe.sim/work/a_1988248537_3858935050.didat");
	xsi_register_executes(pe);
}
