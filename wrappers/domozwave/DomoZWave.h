//-----------------------------------------------------------------------------
//
// DomoZWave a C++/C-wrapper to add open-zwave support to DomotiGa.
// Special thanks to Jaren for creating the wrapper.
//
// DomotiGa - an open source home automation program
// Copyright(C) 2008-2012 Ron Klinkien
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General PUBLIC License for more details.
//
// You should have received a copy of the GNU General PUBLIC License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//
//-----------------------------------------------------------------------------

#define COMMAND_CLASS_NO_OPERATION 0x00
#define COMMAND_CLASS_BASIC 0x20
#define COMMAND_CLASS_CONTROLLER_REPLICATION 0x21
#define COMMAND_CLASS_APPLICATION_STATUS 0x22
#define COMMAND_CLASS_ZIP_SERVICES 0x23
#define COMMAND_CLASS_ZIP_SERVER 0x24
#define COMMAND_CLASS_SWITCH_BINARY 0x25
#define COMMAND_CLASS_SWITCH_MULTILEVEL 0x26
#define COMMAND_CLASS_SWITCH_ALL 0x27
#define COMMAND_CLASS_SWITCH_TOGGLE_BINARY 0x28
#define COMMAND_CLASS_SWITCH_TOGGLE_MULTILEVEL 0x29
#define COMMAND_CLASS_CHIMNEY_FAN 0x2A
#define COMMAND_CLASS_SCENE_ACTIVATION 0x2B
#define COMMAND_CLASS_SCENE_ACTUATOR CONF 0x2C
#define COMMAND_CLASS_SCENE_CONTROLLER CONF 0x2D
#define COMMAND_CLASS_ZIP_CLIENT 0x2E
#define COMMAND_CLASS_ZIP_ADV_SERVICES 0x2F
#define COMMAND_CLASS_SENSOR_BINARY 0x30
#define COMMAND_CLASS_SENSOR_MULTILEVEL 0x31
#define COMMAND_CLASS_METER 0x32
#define COMMAND_CLASS_ZIP_ADV_SERVER 0x33
#define COMMAND_CLASS_ZIP_ADV_CLIENT 0x34
#define COMMAND_CLASS_METER_PULSE 0x35
#define COMMAND_CLASS_THERMOSTAT_HEATING 0x38
#define COMMAND_CLASS_THERMOSTAT_MODE 0x40
#define COMMAND_CLASS_THERMOSTAT_OPERATING_STATE 0x42
#define COMMAND_CLASS_THERMOSTAT_SETPOINT 0x43
#define COMMAND_CLASS_THERMOSTAT_FAN_MODE 0x44
#define COMMAND_CLASS_THERMOSTAT_FAN_STATE 0x45
#define COMMAND_CLASS_CLIMATE_CONTROL_SCHEDULE 0x46
#define COMMAND_CLASS_THERMOSTAT_SETBACK 0x47
#define COMMAND_CLASS_DOOR_LOCK_LOGGING 0x4C
#define COMMAND_CLASS_SCHEDULE_ENTRY_LOCK 0x4E
#define COMMAND_CLASS_BASIC_WINDOW_COVERING 0x50
#define COMMAND_CLASS_MTP_WINDOW_COVERING 0x51
#define COMMAND_CLASS_MULTI_INSTANCE 0x60
#define COMMAND_CLASS_DOOR_LOCK 0x62
#define COMMAND_CLASS_USER_CODE 0x63
#define COMMAND_CLASS_CONFIGURATION 0x70
#define COMMAND_CLASS_ALARM 0x71
#define COMMAND_CLASS_MANUFACTURER_SPECIFIC 0x72
#define COMMAND_CLASS_POWERLEVEL 0x73
#define COMMAND_CLASS_PROTECTION 0x75
#define COMMAND_CLASS_LOCK 0x76
#define COMMAND_CLASS_NODE_NAMING 0x77
#define COMMAND_CLASS_FIRMWARE_UPDATE_MD 0x7A
#define COMMAND_CLASS_GROUPING_NAME 0x7B
#define COMMAND_CLASS_REMOTE_ASSOCIATION_ACTIVATE 0x7C
#define COMMAND_CLASS_REMOTE_ASSOCIATION 0x7D
#define COMMAND_CLASS_BATTERY 0x80
#define COMMAND_CLASS_CLOCK 0x81
#define COMMAND_CLASS_HAIL 0x82
#define COMMAND_CLASS_WAKE_UP 0x84
#define COMMAND_CLASS_ASSOCIATION 0x85
#define COMMAND_CLASS_VERSION 0x86
#define COMMAND_CLASS_INDICATOR 0x87
#define COMMAND_CLASS_PROPRIETARY 0x88
#define COMMAND_CLASS_LANGUAGE 0x89
#define COMMAND_CLASS_TIME 0x8A
#define COMMAND_CLASS_TIME_PARAMETERS 0x8B
#define COMMAND_CLASS_GEOGRAPHIC_LOCATION 0x8C
#define COMMAND_CLASS_COMPOSITE 0x8D
#define COMMAND_CLASS_MULTI_INSTANCE_ASSOCIATION 0x8E
#define COMMAND_CLASS_MULTI_CMD 0x8F
#define COMMAND_CLASS_ENERGY_PRODUCTION 0x90
#define COMMAND_CLASS_MANUFACTURER_PROPRIETARY 0x91
#define COMMAND_CLASS_SCREEN_MD 0x92
#define COMMAND_CLASS_SCREEN_ATTRIBUTES 0x93
#define COMMAND_CLASS_SIMPLE_AV_CONTROL 0x94
#define COMMAND_CLASS_AV_CONTENT_DIRECTORY MD 0x95
#define COMMAND_CLASS_AV_RENDERER_STATUS 0x96
#define COMMAND_CLASS_AV_CONTENT_SEARCH_MD 0x97
#define COMMAND_CLASS_SECURITY 0x98
#define COMMAND_CLASS_AV_TAGGING_MD 0x99
#define COMMAND_CLASS_IP_CONFIGURATION 0x9A
#define COMMAND_CLASS_ASSOCIATION_COMMAND_CONFIGURATION 0x9B
#define COMMAND_CLASS_SENSOR_ALARM 0x9C
#define COMMAND_CLASS_SILENCE_ALARM 0x9D
#define COMMAND_CLASS_SENSOR_CONFIGURATION 0x9E
#define COMMAND_CLASS_MARK 0xEF
#define COMMAND_CLASS_NON_INTEROPERABLE 0xF0

#define BASIC_TYPE_CONTROLLER 0x01
#define BASIC_TYPE_STATIC_CONTROLLER 0x02
#define BASIC_TYPE_SLAVE 0x03
#define BASIC_TYPE_ROUTING_SLAVE 0x04

#define GENERIC_TYPE_GENERIC_CONTROLLER 0x01
#define GENERIC_TYPE_STATIC_CONTROLLER 0x02
#define GENERIC_TYPE_AV_CONTROL_POINT 0x03
#define GENERIC_TYPE_DISPLAY 0x06
#define GENERIC_TYPE_GARAGE_DOOR 0x07
#define GENERIC_TYPE_THERMOSTAT 0x08
#define GENERIC_TYPE_WINDOW_COVERING 0x09
#define GENERIC_TYPE_REPEATER_SLAVE 0x0F
#define GENERIC_TYPE_SWITCH_BINARY 0x10
#define GENERIC_TYPE_SWITCH_MULTILEVEL 0x11
#define GENERIC_TYPE_SWITCH_REMOTE 0x12
#define GENERIC_TYPE_SWITCH_TOGGLE 0x13
#define GENERIC_TYPE_ZIP_GATEWAY 0x14
#define GENERIC_TYPE_ZIP_NODE 0x15
#define GENERIC_TYPE_SENSOR_BINARY 0x20
#define GENERIC_TYPE_SENSOR_MULTILEVEL 0x21
#define GENERIC_TYPE_WATER_CONTROL 0x22
#define GENERIC_TYPE_METER_PULSE 0x30
#define GENERIC_TYPE_METER 0x31
#define GENERIC_TYPE_ENTRY_CONTROL 0x40
#define GENERIC_TYPE_SEMI_INTEROPERABLE 0x50
#define GENERIC_TYPE_SENSOR_ALARM 0xA1
#define GENERIC_TYPE_NON_INTEROPERABLE 0xFF

extern "C" {

// Initialize and destroy the wrapper
void DomoZWave_Init( const char* configdir, const char* zwdir, const char* logname, int rpcPort, bool enableLog, bool enableOZWLog, int polltime );
void DomoZWave_AddSerialPort( const char* serialPort );
void DomoZWave_Destroy( );

// Write zwcfg*xml, normally this happens automatically when the open-wave initialized or exits
void DomoZWave_WriteConfig( int32 home );

// Retrieve wrapper and controller information
const char* DomoZWave_Version( );
const char* DomoZWave_OZWVersion( );
const char* DomoZWave_GetLibraryVersion( int32 home );
const char* DomoZWave_GetLibraryTypeName( int32 home );
const char* DomoZWave_ControllerType( int32 home );

// Enable/disable polling of the devices by open-zwave
void DomoZWave_EnablePolling( int32 home, int32 node, int32 polltime );
void DomoZWave_DisablePolling( int32 home, int32 node );

// Retrieve or set node information
const char* DomoZWave_GetNodeManufacturerName( int32 home, int32 node );
const char* DomoZWave_GetNodeProductName( int32 home, int32 node );
const char* DomoZWave_GetNodeName( int32 home, int32 node );
const char* DomoZWave_GetNodeLocation( int32 home, int32 node );
const char* DomoZWave_GetNodeManufacturerId( int32 home, int32 node );
const char* DomoZWave_GetNodeProductType( int32 home, int32 node );
const char* DomoZWave_GetNodeProductId( int32 home, int32 node );
void DomoZWave_SetNodeManufacturerName( int32 home, int32 node, const char* manufacturerName );
void DomoZWave_SetNodeProductName( int32 home, int32 node, const char* productName );
void DomoZWave_SetNodeName( int32 home, int32 node, const char* nodeName );
void DomoZWave_SetNodeLocation( int32 home, int32 node, const char* nodeLocation );
const char* DomoZWave_GetNodeLibraryVersion( int32 home, int32 node );
const char* DomoZWave_GetNodeProtocolVersion( int32 home, int32 node );
const char* DomoZWave_GetNodeApplicationVersion( int32 home, int32 node );

// Request or update node state
bool DomoZWave_RequestNodeState( int32 home, int32 node );
bool DomoZWave_RequestNodeDynamic( int32 home, int32 node );
bool DomoZWave_RequestNodeNeighborUpdate( int32 home, int32 node );
bool DomoZWave_RefreshNodeInfo(int32 home, int32 node );
bool DomoZWave_RequestNodeVersion( int32 home, int32 node );
bool DomoZWave_RequestNodeMeter( int32 home, int32 node );
bool DomoZWave_SetValue( int32 home, int32 node, int32 instance, int32 value );

// Request or update node configuration
bool DomoZWave_SetConfigParam( int32 home, int32 node, int32 param, int32 value, int32 size );
void DomoZWave_RequestConfigParam( int32 home, int32 node, int32 param );
void DomoZWave_RequestAllConfigParams( int32 home, int32 node );
const char* DomoZWave_GetNodeConfigValue( int32 home, int32 node, int32 item );
const char* DomoZWave_GetNodeConfigList( int32 home, int32 node );
const char* DomoZWave_GetNodeConfigLabel( int32 home, int32 node, int32 item );
const char* DomoZWave_GetNodeConfigHelp( int32 home, int32 node, int32 item );
const char* DomoZWave_GetNodeConfigValue( int32 home, int32 node, int32 item );
const char* DomoZWave_GetNodeConfigValueType( int32 home, int32 node, int32 item );
const char* DomoZWave_GetNodeConfigValueList( int32 home, int32 node, int32 item );

// Retrieve the node neighborhood list or commandclass list
const char* DomoZWave_GetNodeNeighborsList( int32 home, int32 node );
const char* DomoZWave_GetNodeCommandClassList( int32 home, int32 node, int32 instance );

// Request or update the group/association of a node
int DomoZWave_GetNodeGroupCount( int32 home, int32 node );
const char* DomoZWave_GetNodeGroupList( int32 home, int32 node, int32 ogroup );
int DomoZWave_GetNodeGroupMax( int32 home, int32 node, int32 ogroup );
const char* DomoZWave_GetNodeGroupLabel( int32 home, int32 node, int32 ogroup );
void DomoZWave_AddAssociation( int32 home, int32 node, int group, int otherNode );
void DomoZWave_RemoveAssociation( int32 home, int32 node, int group, int otherNode );

// Soft or hard reset the controller
void DomoZWave_ControllerSoftReset( int32 home );
void DomoZWave_ControllerHardReset( int32 home );

// Controller commands
bool DomoZWave_CancelControllerCommand( int32 home );
bool DomoZWave_AddDevice( int32 home );
bool DomoZWave_RemoveDevice( int32 home );
bool DomoZWave_AddController( int32 home );
bool DomoZWave_RemoveController( int32 home );
bool DomoZWave_AssignReturnRoute( int32 home, int32 node );
bool DomoZWave_DeleteAllReturnRoutes( int32 home, int32 node );
bool DomoZWave_RequestNetworkUpdate( int32 home, int32 node );
bool DomoZWave_CreateNewPrimary( int32 home );
bool DomoZWave_TransferPrimaryRole( int32 home );
bool DomoZWave_ReceiveConfiguration( int32 home );
bool DomoZWave_HasNodeFailed( int32 home, int32 node );
bool DomoZWave_RemoveFailedNode( int32 home, int32 node );
bool DomoZWave_ReplaceFailedNode( int32 home, int32 node );

// Statistical information
const char* DomoZWave_GetDriverStatistics( int32 home );
long DomoZWave_GetSendQueueCount( int32 home );

// Make certain information readable
const char* DomoZWave_CommandClassIdName( int class_value );
const char* DomoZWave_GenreIdName( int genre );
const char* DomoZWave_BasicTypeName( int basictype );
const char* DomoZWave_GenericTypeName( int generictype );

//-----------------------------------------------------------------------------
// Thermostate and Scenes are not supported (yet)
//-----------------------------------------------------------------------------

}
