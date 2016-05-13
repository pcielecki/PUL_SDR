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


static void work_a_2390617791_2204926713_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t1, t4, 12);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (12U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3744);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 12U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3664);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t6, 0);
    goto LAB6;

}


extern void work_a_2390617791_2204926713_init()
{
	static char *pe[] = {(void *)work_a_2390617791_2204926713_p_0};
	xsi_register_didat("work_a_2390617791_2204926713", "isim/demodulator_tb_isim_beh.exe.sim/work/a_2390617791_2204926713.didat");
	xsi_register_executes(pe);
}
