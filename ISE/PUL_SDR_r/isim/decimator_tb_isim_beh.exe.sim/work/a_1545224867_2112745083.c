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
static const char *ng0 = "C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/decimator.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_1545224867_2112745083_p_0(char *t0)
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
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2256);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 2308);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1052U);
    t6 = *((char **)t2);
    t2 = (t0 + 4152U);
    t7 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t13, t6, t2, (unsigned char)3);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t16 = (2U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 2308);
    t10 = (t9 + 32U);
    t17 = *((char **)t10);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152U);
    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t5 = (t0 + 4120U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(2U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 1360U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 2332);
    t10 = (t0 + 4168U);
    t7 = xsi_base_array_concat(t7, t13, t9, (char)97, t8, t10, (char)99, (unsigned char)2, (char)101);
    t14 = (1U + 1U);
    t4 = (2U != t14);
    if (t4 == 1)
        goto LAB15;

LAB16:    t17 = (t0 + 2308);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 2U);
    xsi_driver_first_trans_fast(t17);
    goto LAB13;

LAB15:    xsi_size_not_matching(2U, t14, 0);
    goto LAB16;

}

static void work_a_1545224867_2112745083_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152U);
    t3 = (t0 + 868U);
    t4 = *((char **)t3);
    t3 = (t0 + 4120U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB2:    t12 = (t0 + 2264);
    *((int *)t12) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 776U);
    t7 = *((char **)t6);
    t6 = (t0 + 2344);
    t8 = (t6 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 5U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

}


extern void work_a_1545224867_2112745083_init()
{
	static char *pe[] = {(void *)work_a_1545224867_2112745083_p_0,(void *)work_a_1545224867_2112745083_p_1};
	xsi_register_didat("work_a_1545224867_2112745083", "isim/decimator_tb_isim_beh.exe.sim/work/a_1545224867_2112745083.didat");
	xsi_register_executes(pe);
}
