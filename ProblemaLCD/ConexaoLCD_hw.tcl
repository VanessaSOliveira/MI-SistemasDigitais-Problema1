# TCL File Generated by Component Editor 18.1
# Tue Oct 16 16:17:50 BRT 2018
# DO NOT MODIFY


# 
# ConexaoLCD "ConexaoLCD" v1.0
#  2018.10.16.16:17:50
# 
# 

# 
# request TCL package from ACDS 16.1
# 
package require -exact qsys 16.1


# 
# module ConexaoLCD
# 
set_module_property DESCRIPTION ""
set_module_property NAME ConexaoLCD
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property AUTHOR ""
set_module_property DISPLAY_NAME ConexaoLCD
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false
set_module_property REPORT_HIERARCHY false


# 
# file sets
# 
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL ConexaoLCD
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
set_fileset_property QUARTUS_SYNTH ENABLE_FILE_OVERWRITE_MODE false
add_fileset_file ConexaoLCD.v VERILOG PATH ConexaoLCD.v TOP_LEVEL_FILE


# 
# parameters
# 


# 
# display items
# 


# 
# connection point rsConduit
# 
add_interface rsConduit conduit end
set_interface_property rsConduit associatedClock clock_sink
set_interface_property rsConduit associatedReset reset_sink
set_interface_property rsConduit ENABLED true
set_interface_property rsConduit EXPORT_OF ""
set_interface_property rsConduit PORT_NAME_MAP ""
set_interface_property rsConduit CMSIS_SVD_VARIABLES ""
set_interface_property rsConduit SVD_ADDRESS_GROUP ""

add_interface_port rsConduit rs writeresponsevalid_n Output 1


# 
# connection point palavraConduit
# 
add_interface palavraConduit conduit end
set_interface_property palavraConduit associatedClock clock_sink
set_interface_property palavraConduit associatedReset reset_sink
set_interface_property palavraConduit ENABLED true
set_interface_property palavraConduit EXPORT_OF ""
set_interface_property palavraConduit PORT_NAME_MAP ""
set_interface_property palavraConduit CMSIS_SVD_VARIABLES ""
set_interface_property palavraConduit SVD_ADDRESS_GROUP ""

add_interface_port palavraConduit palavraSaida readdata Output 8


# 
# connection point rwConduit
# 
add_interface rwConduit conduit end
set_interface_property rwConduit associatedClock clock_sink
set_interface_property rwConduit associatedReset reset_sink
set_interface_property rwConduit ENABLED true
set_interface_property rwConduit EXPORT_OF ""
set_interface_property rwConduit PORT_NAME_MAP ""
set_interface_property rwConduit CMSIS_SVD_VARIABLES ""
set_interface_property rwConduit SVD_ADDRESS_GROUP ""

add_interface_port rwConduit rw writeresponsevalid_n Output 1


# 
# connection point enableConduit_1
# 
add_interface enableConduit_1 conduit end
set_interface_property enableConduit_1 associatedClock clock_sink
set_interface_property enableConduit_1 associatedReset reset_sink
set_interface_property enableConduit_1 ENABLED true
set_interface_property enableConduit_1 EXPORT_OF ""
set_interface_property enableConduit_1 PORT_NAME_MAP ""
set_interface_property enableConduit_1 CMSIS_SVD_VARIABLES ""
set_interface_property enableConduit_1 SVD_ADDRESS_GROUP ""

add_interface_port enableConduit_1 enable writeresponsevalid_n Output 1


# 
# connection point nios_custom_instruction_slave_1
# 
add_interface nios_custom_instruction_slave_1 nios_custom_instruction end
set_interface_property nios_custom_instruction_slave_1 clockCycle 0
set_interface_property nios_custom_instruction_slave_1 operands 2
set_interface_property nios_custom_instruction_slave_1 ENABLED true
set_interface_property nios_custom_instruction_slave_1 EXPORT_OF ""
set_interface_property nios_custom_instruction_slave_1 PORT_NAME_MAP ""
set_interface_property nios_custom_instruction_slave_1 CMSIS_SVD_VARIABLES ""
set_interface_property nios_custom_instruction_slave_1 SVD_ADDRESS_GROUP ""

add_interface_port nios_custom_instruction_slave_1 result result Output 32
add_interface_port nios_custom_instruction_slave_1 dataa dataa Input 32
add_interface_port nios_custom_instruction_slave_1 clk_en clk_en Input 1
add_interface_port nios_custom_instruction_slave_1 done done Output 1
add_interface_port nios_custom_instruction_slave_1 start start Input 1


# 
# connection point clock_sink
# 
add_interface clock_sink clock end
set_interface_property clock_sink clockRate 0
set_interface_property clock_sink ENABLED true
set_interface_property clock_sink EXPORT_OF ""
set_interface_property clock_sink PORT_NAME_MAP ""
set_interface_property clock_sink CMSIS_SVD_VARIABLES ""
set_interface_property clock_sink SVD_ADDRESS_GROUP ""

add_interface_port clock_sink clk clk Input 1


# 
# connection point reset_sink
# 
add_interface reset_sink reset end
set_interface_property reset_sink associatedClock clock_sink
set_interface_property reset_sink synchronousEdges DEASSERT
set_interface_property reset_sink ENABLED true
set_interface_property reset_sink EXPORT_OF ""
set_interface_property reset_sink PORT_NAME_MAP ""
set_interface_property reset_sink CMSIS_SVD_VARIABLES ""
set_interface_property reset_sink SVD_ADDRESS_GROUP ""

add_interface_port reset_sink reset reset Input 1

