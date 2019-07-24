#ifndef FDMDATASPLTYPES_H
#define FDMDATASPLTYPES_H

#include "ccpp_FDMData.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __FDMData_FDMData__load (c_base base);

extern c_metaObject __FDMData_Msg__load (c_base base);
extern const char * __FDMData_Msg__keys (void);
extern const char * __FDMData_Msg__name (void);
struct _FDMData_Msg ;
extern  c_bool __FDMData_Msg__copyIn(c_base base, struct FDMData::Msg *from, struct _FDMData_Msg *to);
extern  void __FDMData_Msg__copyOut(void *_from, void *_to);
struct _FDMData_Msg {
    c_long ID;
    c_double Thrust;
    c_short dualFuelIndicatorPort;
    c_short dualFuelIndicatorStar;
    c_float fuelFlowRate;
    c_short dualHydraulicGuageEmg;
    c_short dualHydraulicGuageUC;
    c_float machNumber;
    c_bool rightExternalWingFuelTankIndicator;
    c_bool leftExternalWingFuelTankIndicator;
    c_bool rightInternalWingFuelTankIndicator;
    c_bool leftInternalWingFuelTankIndicator;
    c_bool upperbayFuelTankIndicator;
    c_bool centerlineFuelTankIndicator;
    c_float temperatureEGT;
    c_short RPM;
    c_long altitudeAboveSeaLevel;
    c_bool altitudeAboveSeaLevelFlag;
    c_float accelerometer;
    c_float airspeedMachMeter;
    c_float verticalSpeedIndicator;
    c_bool incidenceIndicatorRed;
    c_bool incidenceIndicatorAmber;
    c_bool incidenceIndicatorGreen;
    c_float heading;
    c_long altitudeAboveGroundLevel;
    c_bool altitudeAboveGroundLevelFlag;
    c_float rollDegrees;
    c_float pitchDegrees;
};

#endif
