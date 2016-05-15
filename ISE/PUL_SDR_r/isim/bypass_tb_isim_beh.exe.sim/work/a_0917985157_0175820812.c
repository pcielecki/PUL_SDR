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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/clk_prescaler.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0917985157_0175820812_p_0(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t5 = t1;
    memset(t5, (unsigned char)2, 1U);
    t6 = (t0 + 3728);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 5920U);
    t7 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t13, t6, t2, (unsigned char)3);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t16 = (1U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 3728);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 1U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5936U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 5920U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(1U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t4 = *((unsigned char *)t8);
    t11 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t4, (unsigned char)3);
    t7 = (t0 + 3792);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t11;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(55, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t5 = (t0 + 3728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

}

static void work_a_0917985157_0175820812_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3856);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3648);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0917985157_0175820812_init()
{
	static char *pe[] = {(void *)work_a_0917985157_0175820812_p_0,(void *)work_a_0917985157_0175820812_p_1};
	xsi_register_didat("work_a_0917985157_0175820812", "isim/bypass_tb_isim_beh.exe.sim/work/a_0917985157_0175820812.didat");
	xsi_register_executes(pe);
}
