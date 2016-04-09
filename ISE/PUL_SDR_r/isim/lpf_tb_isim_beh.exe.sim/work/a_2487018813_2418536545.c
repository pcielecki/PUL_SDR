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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/audio_LP_filter.vhd";



static void work_a_2487018813_2418536545_p_0(char *t0)
{
    char t18[16];
    char t19[32];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    int t16;
    unsigned int t17;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1572U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1640U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4316);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(85, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    t6 = (4U * 1U);
    t7 = t5;
    memset(t7, (unsigned char)2, t6);
    t8 = (t6 != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4368);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (16U / t6);
    xsi_mem_set_data(t5, t5, t6, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1756U);
    t7 = *((char **)t2);
    t2 = (t0 + 1940U);
    t10 = *((char **)t2);
    t16 = (4 - 1);
    t6 = (3 - t16);
    t9 = (t6 * 4U);
    t17 = (0 + t9);
    t2 = (t10 + t17);
    t12 = (t0 + 4716);
    t13 = (t19 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 1;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t20 = (1 - 3);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t21;
    t14 = (t19 + 16U);
    t22 = (t14 + 0U);
    *((int *)t22) = 3;
    t22 = (t14 + 4U);
    *((int *)t22) = 0;
    t22 = (t14 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 3);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t14 + 12U);
    *((unsigned int *)t22) = t21;
    t11 = xsi_base_array_concat(t11, t18, t12, (char)109, t7, (char)97, t2, t19, (char)101);
    t22 = (t0 + 4368);
    t24 = (t22 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t11, 16U);
    xsi_driver_first_trans_fast(t22);
    goto LAB3;

LAB9:    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t15 = (t8 == (unsigned char)3);
    t3 = t15;
    goto LAB11;

}

static void work_a_2487018813_2418536545_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t1 = (t0 + 2124U);
    t2 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (4U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 4404);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 4324);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2487018813_2418536545_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(98, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 4440);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 0U, 4U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2487018813_2418536545_init()
{
	static char *pe[] = {(void *)work_a_2487018813_2418536545_p_0,(void *)work_a_2487018813_2418536545_p_1,(void *)work_a_2487018813_2418536545_p_2};
	xsi_register_didat("work_a_2487018813_2418536545", "isim/lpf_tb_isim_beh.exe.sim/work/a_2487018813_2418536545.didat");
	xsi_register_executes(pe);
}
