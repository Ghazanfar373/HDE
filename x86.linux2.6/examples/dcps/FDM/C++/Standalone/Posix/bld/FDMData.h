//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: FDMData.h
//  Source: ../../../idl/FDMData.idl
//  Generated: Wed Oct 24 10:05:08 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _FDMDATA_H_
#define _FDMDATA_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"

namespace FDMData
{
   struct Msg;

   struct Msg
   {
      DDS::Long ID;
      DDS::Double Thrust;
      DDS::Short dualFuelIndicatorPort;
      DDS::Short dualFuelIndicatorStar;
      DDS::Float fuelFlowRate;
      DDS::Short dualHydraulicGuageEmg;
      DDS::Short dualHydraulicGuageUC;
      DDS::Float machNumber;
      DDS::Boolean rightExternalWingFuelTankIndicator;
      DDS::Boolean leftExternalWingFuelTankIndicator;
      DDS::Boolean rightInternalWingFuelTankIndicator;
      DDS::Boolean leftInternalWingFuelTankIndicator;
      DDS::Boolean upperbayFuelTankIndicator;
      DDS::Boolean centerlineFuelTankIndicator;
      DDS::Float temperatureEGT;
      DDS::Short RPM;
      DDS::Long altitudeAboveSeaLevel;
      DDS::Boolean altitudeAboveSeaLevelFlag;
      DDS::Float accelerometer;
      DDS::Float airspeedMachMeter;
      DDS::Float verticalSpeedIndicator;
      DDS::Boolean incidenceIndicatorRed;
      DDS::Boolean incidenceIndicatorAmber;
      DDS::Boolean incidenceIndicatorGreen;
      DDS::Float heading;
      DDS::Long altitudeAboveGroundLevel;
      DDS::Boolean altitudeAboveGroundLevelFlag;
      DDS::Float rollDegrees;
      DDS::Float pitchDegrees;
   };

   typedef DDS_DCPSStruct_var < Msg> Msg_var;
   typedef Msg&Msg_out;
}




#endif 