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
static const char *ng0 = "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/SW_defined_radio.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;

int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2598175070666390882_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_4437083849341520093_1035706684(char *, char *, char *, char *);


static void work_a_1913325755_4013101546_p_0(char *t0)
{
    char t1[16];
    char t6[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 12800U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 12768U);
    t4 = xsi_base_array_concat(t4, t6, t7, (char)99, (unsigned char)2, (char)97, t5, t8, (char)101);
    t9 = ieee_p_1242562249_sub_2598175070666390882_1035706684(IEEE_P_1242562249, t1, t3, t2, t4, t6);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (33U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 7512);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 33U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t19 = (t0 + 7288);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t12, 0);
    goto LAB6;

}

static void work_a_1913325755_4013101546_p_1(char *t0)
{
    char t1[16];
    char t6[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(108, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 12800U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 12768U);
    t4 = xsi_base_array_concat(t4, t6, t7, (char)99, (unsigned char)2, (char)97, t5, t8, (char)101);
    t9 = ieee_p_1242562249_sub_2598175070666390882_1035706684(IEEE_P_1242562249, t1, t3, t2, t4, t6);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (33U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 7576);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 33U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t19 = (t0 + 7304);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t12, 0);
    goto LAB6;

}

static void work_a_1913325755_4013101546_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(112, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7640);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7320);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1913325755_4013101546_p_3(char *t0)
{
    char t1[16];
    char t2[16];
    char t6[16];
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(116, ng0);

LAB3:    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 12816U);
    t5 = ieee_p_1242562249_sub_4437083849341520093_1035706684(IEEE_P_1242562249, t2, t4, t3);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 12816U);
    t9 = ieee_p_1242562249_sub_4437083849341520093_1035706684(IEEE_P_1242562249, t6, t8, t7);
    t10 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t1, t5, t2, t9, t6);
    t11 = (t1 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (33U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 7704);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 33U);
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 7336);
    *((int *)t20) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t13, 0);
    goto LAB6;

}

static void work_a_1913325755_4013101546_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(117, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (32 - 32);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 7352);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1913325755_4013101546_p_5(char *t0)
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

LAB0:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 2592U);
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
LAB3:    t3 = (t0 + 7368);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(135, ng0);
    t5 = (t0 + 6776);
    t12 = (t0 + 4864U);
    t13 = (t0 + 1832U);
    t14 = *((char **)t13);
    t13 = (t0 + 12800U);
    t15 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t14, t13);
    std_textio_write5(STD_TEXTIO, t5, t12, t15, (unsigned char)0, 0);
    xsi_set_current_line(136, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 4376U);
    t6 = (t0 + 4864U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    xsi_set_current_line(138, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 5080U);
    t6 = (t0 + 1992U);
    t9 = *((char **)t6);
    t6 = (t0 + 12800U);
    t15 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t9, t6);
    std_textio_write5(STD_TEXTIO, t3, t5, t15, (unsigned char)0, 0);
    xsi_set_current_line(139, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 4688U);
    t6 = (t0 + 5080U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    xsi_set_current_line(141, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 4936U);
    t6 = (t0 + 2152U);
    t9 = *((char **)t6);
    t6 = (t0 + 12816U);
    t15 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t9, t6);
    std_textio_write5(STD_TEXTIO, t3, t5, t15, (unsigned char)0, 0);
    xsi_set_current_line(142, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 4480U);
    t6 = (t0 + 4936U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    xsi_set_current_line(144, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 5008U);
    t6 = (t0 + 2312U);
    t9 = *((char **)t6);
    t6 = (t0 + 12816U);
    t15 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t9, t6);
    std_textio_write5(STD_TEXTIO, t3, t5, t15, (unsigned char)0, 0);
    xsi_set_current_line(145, ng0);
    t3 = (t0 + 6776);
    t5 = (t0 + 4584U);
    t6 = (t0 + 5008U);
    std_textio_writeline(STD_TEXTIO, t3, t5, t6);
    goto LAB3;

LAB5:    t5 = (t0 + 1032U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB10;

}


extern void work_a_1913325755_4013101546_init()
{
	static char *pe[] = {(void *)work_a_1913325755_4013101546_p_0,(void *)work_a_1913325755_4013101546_p_1,(void *)work_a_1913325755_4013101546_p_2,(void *)work_a_1913325755_4013101546_p_3,(void *)work_a_1913325755_4013101546_p_4,(void *)work_a_1913325755_4013101546_p_5};
	xsi_register_didat("work_a_1913325755_4013101546", "isim/demodulator_tb_isim_beh.exe.sim/work/a_1913325755_4013101546.didat");
	xsi_register_executes(pe);
}
