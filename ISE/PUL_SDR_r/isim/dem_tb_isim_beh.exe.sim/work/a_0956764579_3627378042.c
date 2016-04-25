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
extern char *WORK_P_4167035535;



static void work_a_0956764579_3627378042_p_0(char *t0)
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
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(50, ng0);
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
LAB3:    t1 = (t0 + 3224);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t2 = ((WORK_P_4167035535) + 1168U);
    t6 = *((char **)t2);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t11 = *((int *)t7);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 124, 1, t11);
    t14 = (4U * t13);
    t15 = (0 + t14);
    t2 = (t6 + t15);
    t16 = *((int *)t2);
    t8 = (t0 + 3304);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((int *)t20) = t16;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}


extern void work_a_0956764579_3627378042_init()
{
	static char *pe[] = {(void *)work_a_0956764579_3627378042_p_0};
	xsi_register_didat("work_a_0956764579_3627378042", "isim/dem_tb_isim_beh.exe.sim/work/a_0956764579_3627378042.didat");
	xsi_register_executes(pe);
}
