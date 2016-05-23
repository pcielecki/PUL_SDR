
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PUL_SDR_r -dir "/home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "bypass.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {DAC_Control.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {clk_prescaler.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ADC_control.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {DAC_TOP.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ADC_TOP.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {bypass.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top bypass $srcset
add_files [list {bypass.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/fir_filter.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
