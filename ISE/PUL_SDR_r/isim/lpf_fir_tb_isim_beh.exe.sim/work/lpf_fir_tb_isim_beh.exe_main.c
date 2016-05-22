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

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3564397177;
char *STD_TEXTIO;
char *XILINXCORELIB_P_2180628434;
char *XILINXCORELIB_P_1837083571;
char *IEEE_P_3499444699;
char *XILINXCORELIB_P_0347517956;
char *IEEE_P_1242562249;
char *XILINXCORELIB_P_0292540400;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    xilinxcorelib_p_1837083571_init();
    ieee_p_1242562249_init();
    ieee_p_3564397177_init();
    xilinxcorelib_p_0292540400_init();
    xilinxcorelib_p_0347517956_init();
    xilinxcorelib_p_2180628434_init();
    xilinxcorelib_a_0270227236_3212880686_init();
    xilinxcorelib_a_3584485269_3212880686_init();
    work_a_3610324789_2440983976_init();
    work_a_0382989328_2567979825_init();
    work_a_3958752231_2372691052_init();


    xsi_register_tops("work_a_3958752231_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_2180628434 = xsi_get_engine_memory("xilinxcorelib_p_2180628434");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    XILINXCORELIB_P_0347517956 = xsi_get_engine_memory("xilinxcorelib_p_0347517956");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    XILINXCORELIB_P_0292540400 = xsi_get_engine_memory("xilinxcorelib_p_0292540400");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}
