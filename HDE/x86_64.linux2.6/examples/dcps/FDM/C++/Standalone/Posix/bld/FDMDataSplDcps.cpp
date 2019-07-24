#include "FDMDataSplDcps.h"
#include "ccpp_FDMData.h"

const char *
__FDMData_Msg__name(void)
{
    return (const char*)"FDMData::Msg";
}

const char *
__FDMData_Msg__keys(void)
{
    return (const char*)"ID";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>

c_bool
__FDMData_Msg__copyIn(
    c_base base,
    struct ::FDMData::Msg *from,
    struct _FDMData_Msg *to)
{
    c_bool result = TRUE;

    to->ID = (c_long)from->ID;
    to->Thrust = (c_double)from->Thrust;
    to->dualFuelIndicatorPort = (c_short)from->dualFuelIndicatorPort;
    to->dualFuelIndicatorStar = (c_short)from->dualFuelIndicatorStar;
    to->fuelFlowRate = (c_float)from->fuelFlowRate;
    to->dualHydraulicGuageEmg = (c_short)from->dualHydraulicGuageEmg;
    to->dualHydraulicGuageUC = (c_short)from->dualHydraulicGuageUC;
    to->machNumber = (c_float)from->machNumber;
    to->rightExternalWingFuelTankIndicator = (c_bool)from->rightExternalWingFuelTankIndicator;
    to->leftExternalWingFuelTankIndicator = (c_bool)from->leftExternalWingFuelTankIndicator;
    to->rightInternalWingFuelTankIndicator = (c_bool)from->rightInternalWingFuelTankIndicator;
    to->leftInternalWingFuelTankIndicator = (c_bool)from->leftInternalWingFuelTankIndicator;
    to->upperbayFuelTankIndicator = (c_bool)from->upperbayFuelTankIndicator;
    to->centerlineFuelTankIndicator = (c_bool)from->centerlineFuelTankIndicator;
    to->temperatureEGT = (c_float)from->temperatureEGT;
    to->RPM = (c_short)from->RPM;
    to->altitudeAboveSeaLevel = (c_long)from->altitudeAboveSeaLevel;
    to->altitudeAboveSeaLevelFlag = (c_bool)from->altitudeAboveSeaLevelFlag;
    to->accelerometer = (c_float)from->accelerometer;
    to->airspeedMachMeter = (c_float)from->airspeedMachMeter;
    to->verticalSpeedIndicator = (c_float)from->verticalSpeedIndicator;
    to->incidenceIndicatorRed = (c_bool)from->incidenceIndicatorRed;
    to->incidenceIndicatorAmber = (c_bool)from->incidenceIndicatorAmber;
    to->incidenceIndicatorGreen = (c_bool)from->incidenceIndicatorGreen;
    to->heading = (c_float)from->heading;
    to->altitudeAboveGroundLevel = (c_long)from->altitudeAboveGroundLevel;
    to->altitudeAboveGroundLevelFlag = (c_bool)from->altitudeAboveGroundLevelFlag;
    to->rollDegrees = (c_float)from->rollDegrees;
    to->pitchDegrees = (c_float)from->pitchDegrees;
    return result;
}

void
__FDMData_Msg__copyOut(
    void *_from,
    void *_to)
{
    struct _FDMData_Msg *from = (struct _FDMData_Msg *)_from;
    struct ::FDMData::Msg *to = (struct ::FDMData::Msg *)_to;
    to->ID = (::DDS::Long)from->ID;
    to->Thrust = (::DDS::Double)from->Thrust;
    to->dualFuelIndicatorPort = (::DDS::Short)from->dualFuelIndicatorPort;
    to->dualFuelIndicatorStar = (::DDS::Short)from->dualFuelIndicatorStar;
    to->fuelFlowRate = (::DDS::Float)from->fuelFlowRate;
    to->dualHydraulicGuageEmg = (::DDS::Short)from->dualHydraulicGuageEmg;
    to->dualHydraulicGuageUC = (::DDS::Short)from->dualHydraulicGuageUC;
    to->machNumber = (::DDS::Float)from->machNumber;
    to->rightExternalWingFuelTankIndicator = (::DDS::Boolean)from->rightExternalWingFuelTankIndicator;
    to->leftExternalWingFuelTankIndicator = (::DDS::Boolean)from->leftExternalWingFuelTankIndicator;
    to->rightInternalWingFuelTankIndicator = (::DDS::Boolean)from->rightInternalWingFuelTankIndicator;
    to->leftInternalWingFuelTankIndicator = (::DDS::Boolean)from->leftInternalWingFuelTankIndicator;
    to->upperbayFuelTankIndicator = (::DDS::Boolean)from->upperbayFuelTankIndicator;
    to->centerlineFuelTankIndicator = (::DDS::Boolean)from->centerlineFuelTankIndicator;
    to->temperatureEGT = (::DDS::Float)from->temperatureEGT;
    to->RPM = (::DDS::Short)from->RPM;
    to->altitudeAboveSeaLevel = (::DDS::Long)from->altitudeAboveSeaLevel;
    to->altitudeAboveSeaLevelFlag = (::DDS::Boolean)from->altitudeAboveSeaLevelFlag;
    to->accelerometer = (::DDS::Float)from->accelerometer;
    to->airspeedMachMeter = (::DDS::Float)from->airspeedMachMeter;
    to->verticalSpeedIndicator = (::DDS::Float)from->verticalSpeedIndicator;
    to->incidenceIndicatorRed = (::DDS::Boolean)from->incidenceIndicatorRed;
    to->incidenceIndicatorAmber = (::DDS::Boolean)from->incidenceIndicatorAmber;
    to->incidenceIndicatorGreen = (::DDS::Boolean)from->incidenceIndicatorGreen;
    to->heading = (::DDS::Float)from->heading;
    to->altitudeAboveGroundLevel = (::DDS::Long)from->altitudeAboveGroundLevel;
    to->altitudeAboveGroundLevelFlag = (::DDS::Boolean)from->altitudeAboveGroundLevelFlag;
    to->rollDegrees = (::DDS::Float)from->rollDegrees;
    to->pitchDegrees = (::DDS::Float)from->pitchDegrees;
}

