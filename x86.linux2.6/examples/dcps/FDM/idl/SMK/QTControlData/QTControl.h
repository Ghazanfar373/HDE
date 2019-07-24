//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: QTControl.h
//  Source: QTControl.idl
//  Generated: Fri Dec  2 14:16:53 2016
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _QTCONTROL_H_
#define _QTCONTROL_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"

namespace QTControl
{
   struct QtControlData;

   struct QtControlData
   {
      DDS::Long ID;
      DDS::Double Throttle;
      DDS::Double ElevatorCommand;
      DDS::Double AileronCommand;
      DDS::Double RudderCommand;
      DDS::Double SteerLeft;
      DDS::Double SteerRight;
      DDS::Double LeftBrakeCommand;
      DDS::Double RightBrakeCommand;
      DDS::Double FlapCommand;
      DDS::Boolean EngineStartSwitch;
      DDS::Double ThrottleCommand;
      DDS::Double WindSpeedCommand;
      DDS::Double WindDirectionCommand;
      DDS::Boolean GeneratorSwitch;
      DDS::Boolean InverterSwitch;
      DDS::Boolean BatteryStatus;
   };

   typedef DDS_DCPSStruct_var < QtControlData> QtControlData_var;
   typedef QtControlData&QtControlData_out;
}




#endif 