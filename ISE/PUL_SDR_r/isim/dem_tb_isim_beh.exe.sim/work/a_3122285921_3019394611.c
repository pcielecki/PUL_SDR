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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/nbit_mul.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3122285921_3019394611_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5984U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 6000U);
    t6 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 3872);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 3760);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_3122285921_3019394611_p_1(char *t0)
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

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (16 - 1);
    t4 = (31 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 3936);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 3776);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3122285921_3019394611_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (2 * 16);
    t4 = (t3 - 1);
    t5 = (31 - t4);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = (t0 + 4000);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3792);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3122285921_3019394611_init()
{
	static char *pe[] = {(void *)work_a_3122285921_3019394611_p_0,(void *)work_a_3122285921_3019394611_p_1,(void *)work_a_3122285921_3019394611_p_2};
	xsi_register_didat("work_a_3122285921_3019394611", "isim/dem_tb_isim_beh.exe.sim/work/a_3122285921_3019394611.didat");
	xsi_register_executes(pe);
}
