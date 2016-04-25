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
extern char *STD_TEXTIO;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


static void work_a_2089532979_2204926713_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, t4, t6);
    t7 = (t0 + 4200);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 4088);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2089532979_2204926713_p_1(char *t0)
{
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

LAB0:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 4104);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t5 = (t0 + 3576);
    t12 = (t0 + 2872U);
    t13 = (t0 + 1832U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    std_textio_write5(STD_TEXTIO, t5, t12, t15, (unsigned char)0, 0);
    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3576);
    t5 = (t0 + 2696U);
    t6 = (t0 + 2872U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    goto LAB3;

LAB5:    t5 = (t0 + 1032U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

}


extern void work_a_2089532979_2204926713_init()
{
	static char *pe[] = {(void *)work_a_2089532979_2204926713_p_0,(void *)work_a_2089532979_2204926713_p_1};
	xsi_register_didat("work_a_2089532979_2204926713", "isim/dem_tb_isim_beh.exe.sim/work/a_2089532979_2204926713.didat");
	xsi_register_executes(pe);
}
