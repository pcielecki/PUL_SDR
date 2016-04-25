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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_0774719531;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_4167035535;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_0774719531_init();
    work_p_4167035535_init();
    work_a_0956764579_3627378042_init();
    work_a_2775784570_2166554897_init();
    work_a_2089532979_2204926713_init();
    work_a_0813471086_0175820812_init();
    work_a_3122285921_3019394611_init();
    work_a_1913325755_4013101546_init();
    work_a_1387113657_2372691052_init();


    xsi_register_tops("work_a_1387113657_2372691052");

    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_4167035535 = xsi_get_engine_memory("work_p_4167035535");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
