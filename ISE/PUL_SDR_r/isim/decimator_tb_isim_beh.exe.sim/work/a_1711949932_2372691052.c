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
static const char *ng0 = "C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/decimator_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_1711949932_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1724);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1724);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1711949932_2372691052_p_1(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;

LAB0:    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1.5000000000000000 * t4);
    t2 = (t0 + 1868);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2236);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1200U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = xsi_vhdl_pow(2, t9);
    t2 = (t0 + 4316);
    *((int *)t2) = 1;
    t6 = (t0 + 4320);
    *((int *)t6) = t10;
    t11 = 1;
    t12 = t10;

LAB8:    if (t11 <= t12)
        goto LAB9;

LAB11:    xsi_set_current_line(104, ng0);
    if ((unsigned char)0 == 0)
        goto LAB22;

LAB23:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(96, ng0);
    t7 = (t0 + 4316);
    t8 = (t0 + 1200U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t13, *((int *)t7), t15);
    t16 = (t0 + 2272);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 3U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1132U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t10 = xsi_vhdl_pow(2, t9);
    t2 = (t0 + 4324);
    *((int *)t2) = 0;
    t6 = (t0 + 4328);
    *((int *)t6) = t10;
    t15 = 0;
    t21 = t10;

LAB12:    if (t15 <= t21)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 4316);
    t11 = *((int *)t2);
    t3 = (t0 + 4320);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB11;

LAB21:    t9 = (t11 + 1);
    t11 = t9;
    t6 = (t0 + 4316);
    *((int *)t6) = t11;
    goto LAB8;

LAB13:    xsi_set_current_line(99, ng0);
    t7 = (t0 + 4324);
    t8 = (t0 + 1132U);
    t14 = *((char **)t8);
    t22 = *((int *)t14);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t13, *((int *)t7), t22);
    t16 = (t0 + 2308);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 5U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1 * t4);
    t2 = (t0 + 1868);
    xsi_process_wait(t2, t5);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 4324);
    t15 = *((int *)t2);
    t3 = (t0 + 4328);
    t21 = *((int *)t3);
    if (t15 == t21)
        goto LAB15;

LAB20:    t9 = (t15 + 1);
    t15 = t9;
    t6 = (t0 + 4324);
    *((int *)t6) = t15;
    goto LAB12;

LAB16:    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB22:    t2 = (t0 + 4332);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB23;

}


extern void work_a_1711949932_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1711949932_2372691052_p_0,(void *)work_a_1711949932_2372691052_p_1};
	xsi_register_didat("work_a_1711949932_2372691052", "isim/decimator_tb_isim_beh.exe.sim/work/a_1711949932_2372691052.didat");
	xsi_register_executes(pe);
}
