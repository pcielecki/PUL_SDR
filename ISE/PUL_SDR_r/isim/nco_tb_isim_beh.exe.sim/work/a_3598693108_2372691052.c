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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/NCO_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


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

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3008);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3008);
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
    char *t13;

LAB0:    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1.5000000000000000 * t4);
    t2 = (t0 + 3256);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4176);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6859);
    *((int *)t2) = 1;
    t3 = (t0 + 6863);
    *((int *)t3) = 8;
    t9 = 1;
    t10 = 8;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(99, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(94, ng0);
    t6 = (t0 + 2048U);
    t7 = *((char **)t6);
    t4 = *((int64 *)t7);
    t5 = (100 * t4);
    t6 = (t0 + 3256);
    xsi_process_wait(t6, t5);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 6859);
    t9 = *((int *)t2);
    t3 = (t0 + 6863);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB11;

LAB16:    t11 = (t9 + 1);
    t9 = t11;
    t6 = (t0 + 6859);
    *((int *)t6) = t9;
    goto LAB8;

LAB12:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6859);
    t11 = *((int *)t2);
    t12 = (32 * t11);
    t3 = (t0 + 4240);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((int *)t13) = t12;
    xsi_driver_first_trans_fast(t3);
    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(100, ng0);
    if ((unsigned char)0 == 0)
        goto LAB21;

LAB22:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    t2 = (t0 + 6867);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB22;

}

static void work_a_3598693108_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;

LAB0:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3504);
    t2 = (t0 + 2552U);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t3 = (t0 + 6720U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t3);
    std_textio_write5(STD_TEXTIO, t1, t2, t5, (unsigned char)0, 0);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3504);
    t2 = (t0 + 2376U);
    t3 = (t0 + 2552U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t3);
    t1 = (t0 + 4016);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_3598693108_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3598693108_2372691052_p_0,(void *)work_a_3598693108_2372691052_p_1,(void *)work_a_3598693108_2372691052_p_2};
	xsi_register_didat("work_a_3598693108_2372691052", "isim/nco_tb_isim_beh.exe.sim/work/a_3598693108_2372691052.didat");
	xsi_register_executes(pe);
}
