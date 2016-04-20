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
static const char *ng0 = "C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/nco_tb.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;
extern char *STD_TEXTIO;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_3598693108_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2372);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1176U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1736);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2372);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1176U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1736);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3598693108_2372691052_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;

LAB0:    t1 = (t0 + 1980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1176U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1.5000000000000000 * t4);
    t2 = (t0 + 1880);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 4376U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t9, t3, t2, (unsigned char)3);
    t7 = (t9 + 12U);
    t10 = *((unsigned int *)t7);
    t11 = (1U * t10);
    t12 = (9U != t11);
    if (t12 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 2444);
    t13 = (t8 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 9U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4507);
    *((int *)t2) = 1;
    t3 = (t0 + 4511);
    *((int *)t3) = 8;
    t17 = 1;
    t18 = 8;

LAB10:    if (t17 <= t18)
        goto LAB11;

LAB13:    xsi_set_current_line(100, ng0);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(9U, t11, 0);
    goto LAB9;

LAB11:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 1176U);
    t7 = *((char **)t6);
    t4 = *((int64 *)t7);
    t5 = (100 * t4);
    t6 = (t0 + 1880);
    xsi_process_wait(t6, t5);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB12:    t2 = (t0 + 4507);
    t17 = *((int *)t2);
    t3 = (t0 + 4511);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB13;

LAB18:    t19 = (t17 + 1);
    t17 = t19;
    t6 = (t0 + 4507);
    *((int *)t6) = t17;
    goto LAB10;

LAB14:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4507);
    t19 = *((int *)t2);
    t20 = (16 * t19);
    t3 = (t0 + 1040U);
    t6 = *((char **)t3);
    t21 = *((int *)t6);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t20, t21);
    t7 = (t0 + 2444);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 9U);
    xsi_driver_first_trans_fast(t7);
    goto LAB12;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}

static void work_a_3598693108_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2024);
    t2 = (t0 + 1468U);
    t3 = (t0 + 868U);
    t4 = *((char **)t3);
    t3 = (t0 + 4392U);
    t5 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t3);
    std_textio_write5(STD_TEXTIO, t1, t2, t5, (unsigned char)0, 0);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2024);
    t2 = (t0 + 1364U);
    t3 = (t0 + 1468U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t3);
    t1 = (t0 + 2320);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_3598693108_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3598693108_2372691052_p_0,(void *)work_a_3598693108_2372691052_p_1,(void *)work_a_3598693108_2372691052_p_2};
	xsi_register_didat("work_a_3598693108_2372691052", "isim/nco_tb_isim_beh.exe.sim/work/a_3598693108_2372691052.didat");
	xsi_register_executes(pe);
}
