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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/NCO.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );


static void work_a_2660989138_2204926713_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 2528U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t2 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t1, t4, t6);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (16U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 3904);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3824);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t8, 0);
    goto LAB6;

}


extern void work_a_2660989138_2204926713_init()
{
	static char *pe[] = {(void *)work_a_2660989138_2204926713_p_0};
	xsi_register_didat("work_a_2660989138_2204926713", "isim/demodulator_tb_isim_beh.exe.sim/work/a_2660989138_2204926713.didat");
	xsi_register_executes(pe);
}
