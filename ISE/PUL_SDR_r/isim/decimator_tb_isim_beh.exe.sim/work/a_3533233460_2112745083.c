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


static void work_a_3533233460_2112745083_p_0(char *t0)
{
    char t18[16];
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
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
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
LAB3:    t1 = (t0 + 2112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t5 = t1;
    memset(t5, (unsigned char)2, 3U);
    t6 = (t0 + 2156);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1052U);
    t6 = *((char **)t2);
    t2 = (t0 + 3940U);
    t7 = (t0 + 868U);
    t8 = *((char **)t7);
    t7 = (t0 + 3908U);
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t8, t7);
    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3940U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t18, t2, t1, (unsigned char)3);
    t6 = (t18 + 12U);
    t19 = *((unsigned int *)t6);
    t20 = (1U * t19);
    t3 = (3U != t20);
    if (t3 == 1)
        goto LAB13;

LAB14:    t7 = (t0 + 2156);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 3U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3940U);
    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t5 = (t0 + 3908U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB3;

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t9 = (t0 + 776U);
    t10 = *((char **)t9);
    t9 = (t0 + 2192);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t10, 3U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB11;

LAB13:    xsi_size_not_matching(3U, t20, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 1360U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 2332);
    t10 = (t0 + 3956U);
    t7 = xsi_base_array_concat(t7, t18, t9, (char)97, t8, t10, (char)99, (unsigned char)3, (char)101);
    t19 = (2U + 1U);
    t4 = (3U != t19);
    if (t4 == 1)
        goto LAB18;

LAB19:    t14 = (t0 + 2156);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t21 = *((char **)t17);
    memcpy(t21, t7, 3U);
    xsi_driver_first_trans_fast(t14);
    goto LAB16;

LAB18:    xsi_size_not_matching(3U, t19, 0);
    goto LAB19;

}


extern void work_a_3533233460_2112745083_init()
{
	static char *pe[] = {(void *)work_a_3533233460_2112745083_p_0};
	xsi_register_didat("work_a_3533233460_2112745083", "isim/decimator_tb_isim_beh.exe.sim/work/a_3533233460_2112745083.didat");
	xsi_register_executes(pe);
}
