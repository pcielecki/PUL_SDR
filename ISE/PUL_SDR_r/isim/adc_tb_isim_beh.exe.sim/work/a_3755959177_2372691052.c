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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/adc_tb.vhd";



static void work_a_3755959177_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3752);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3752);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3755959177_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t2 = (t0 + 4000);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (10 * t4);
    t2 = (t0 + 4000);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (5 * t4);
    t2 = (t0 + 4000);
    xsi_process_wait(t2, t5);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (500 * t4);
    t2 = (t0 + 4000);
    xsi_process_wait(t2, t5);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

}

static void work_a_3755959177_2372691052_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    unsigned char t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 1792U);
    t5 = xsi_signal_has_event(t2);
    if (t5 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 4760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2968U);
    t9 = *((char **)t2);
    t2 = (t9 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 2312U);
    t16 = *((char **)t3);
    t17 = *((int *)t16);
    t18 = (t17 > 1);
    if (t18 == 1)
        goto LAB19;

LAB20:    t15 = (unsigned char)0;

LAB21:    if (t15 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);

LAB17:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t2 = (t0 + 5032);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((int *)t16) = t12;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB10:    t3 = (t0 + 2968U);
    t9 = *((char **)t3);
    t11 = *((int *)t9);
    t3 = (t0 + 2608U);
    t10 = *((char **)t3);
    t12 = *((int *)t10);
    t13 = (2 * t12);
    t14 = (t11 < t13);
    t1 = t14;
    goto LAB12;

LAB13:    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t4 = t8;
    goto LAB15;

LAB16:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 2848U);
    t32 = *((char **)t3);
    t3 = (t0 + 2968U);
    t33 = *((char **)t3);
    t34 = *((int *)t33);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 23, 1, t34);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t3 = (t32 + t38);
    t39 = *((unsigned char *)t3);
    t40 = (t0 + 5096);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t39;
    xsi_driver_first_trans_fast(t40);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t2 = (t0 + 2968U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t12;
    goto LAB17;

LAB19:    t3 = (t0 + 2312U);
    t20 = *((char **)t3);
    t21 = *((int *)t20);
    t3 = (t0 + 2608U);
    t22 = *((char **)t3);
    t23 = *((int *)t22);
    t24 = (t23 + 2);
    t25 = (t21 < t24);
    if (t25 == 1)
        goto LAB22;

LAB23:    t3 = (t0 + 2312U);
    t26 = *((char **)t3);
    t27 = *((int *)t26);
    t3 = (t0 + 2608U);
    t28 = *((char **)t3);
    t29 = *((int *)t28);
    t30 = (t29 + 3);
    t31 = (t27 >= t30);
    t19 = t31;

LAB24:    t15 = t19;
    goto LAB21;

LAB22:    t19 = (unsigned char)1;
    goto LAB24;

}


extern void work_a_3755959177_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3755959177_2372691052_p_0,(void *)work_a_3755959177_2372691052_p_1,(void *)work_a_3755959177_2372691052_p_2};
	xsi_register_didat("work_a_3755959177_2372691052", "isim/adc_tb_isim_beh.exe.sim/work/a_3755959177_2372691052.didat");
	xsi_register_executes(pe);
}
