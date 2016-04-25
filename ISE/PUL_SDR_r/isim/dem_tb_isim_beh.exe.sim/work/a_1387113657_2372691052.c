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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/dem_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_1387113657_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1387113657_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (5 * t4);
    t2 = (t0 + 3472);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1387113657_2372691052_p_2(char *t0)
{
    char t19[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;

LAB0:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1632U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t3 = (t0 + 1632U);
    t7 = xsi_signal_has_event(t3);
    if (t7 == 1)
        goto LAB19;

LAB20:    t4 = (unsigned char)0;

LAB21:    if (t4 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB3:    t3 = (t0 + 4232);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t5 = (t0 + 3720);
    t12 = (t0 + 2696U);
    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 7072U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t14, t13);
    std_textio_write5(STD_TEXTIO, t5, t12, t15, (unsigned char)0, 0);
    xsi_set_current_line(104, ng0);
    t3 = (t0 + 3720);
    t5 = (t0 + 2416U);
    t6 = (t0 + 2696U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    goto LAB3;

LAB5:    t5 = (t0 + 1032U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(107, ng0);
    t9 = (t0 + 3720);
    t13 = (t0 + 2520U);
    t14 = (t0 + 2768U);
    std_textio_readline(STD_TEXTIO, t9, t13, t14);
    xsi_set_current_line(108, ng0);
    t3 = (t0 + 3720);
    t5 = (t0 + 2768U);
    t6 = (t0 + 2088U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    std_textio_read10(STD_TEXTIO, t3, t5, t6);
    xsi_set_current_line(110, ng0);
    t3 = (t0 + 2088U);
    t5 = *((char **)t3);
    t15 = *((int *)t5);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t19, t15, 16);
    t6 = (t0 + 4456);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB13:    t9 = (t0 + 1032U);
    t12 = *((char **)t9);
    t17 = *((unsigned char *)t12);
    t18 = (t17 == (unsigned char)3);
    t1 = t18;
    goto LAB15;

LAB16:    t5 = (t0 + 2520U);
    t11 = std_textio_endfile(t5);
    t16 = (!(t11));
    t2 = t16;
    goto LAB18;

LAB19:    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    t10 = (t8 == (unsigned char)3);
    t4 = t10;
    goto LAB21;

}


extern void work_a_1387113657_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1387113657_2372691052_p_0,(void *)work_a_1387113657_2372691052_p_1,(void *)work_a_1387113657_2372691052_p_2};
	xsi_register_didat("work_a_1387113657_2372691052", "isim/dem_tb_isim_beh.exe.sim/work/a_1387113657_2372691052.didat");
	xsi_register_executes(pe);
}
