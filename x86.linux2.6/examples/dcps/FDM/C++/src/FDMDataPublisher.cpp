
/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2011 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE
 *
 *   for full copyright notice and license terms.
 *
 */

/************************************************************************
 * LOGICAL_NAME:    FDMDataPublisher.cpp
 * FUNCTION:        OpenSplice Tutorial example code.
 * MODULE:          Tutorial for the C++ programming language.
 * DATE             September 2010.
 ************************************************************************
 *
 * This file contains the implementation for the 'FDMDataPublisher' executable.
 *
 ***/
#include <string>
#include <sstream>
#include <iostream>
#include "DDSEntityManager.h"
#include "ccpp_FDMData.h"
#include "os.h"

using namespace DDS;
using namespace FDMData;

int main(int argc, char *argv[])
{
  os_time delay_2ms = { 0, 2000000 };
  DDSEntityManager *mgr = new DDSEntityManager();


  // create domain participant
  mgr->createParticipant("FDM example");

  //create type
  MsgTypeSupport_var mt = new MsgTypeSupport();
  mgr->registerType(mt.in());

  //create Topic
 char topic_name[] = "FDMData_Msg";
 mgr->createTopic(topic_name);

  //create Publisher
  mgr->createPublisher();

  // create DataWriter :
  // If autodispose_unregistered_instances is set to true (default value),
  // you will have to start the subscriber before the publisher
  bool autodispose_unregistered_instances = false;
  mgr->createWriter(autodispose_unregistered_instances);

  // Publish Events
  DataWriter_ptr dwriter = mgr->getWriter();
  MsgDataWriter_var FDMWriter = MsgDataWriter::_narrow(dwriter);

  Msg msgInstance; /* Example on Stack */
  msgInstance.ID = 1;
  //msgInstance.message = CORBA::string_dup("FDM");
  //msgInstance.Altitude = 6000;
  msgInstance.RPM = 1000;
  
  msgInstance.Thrust = 700;
  msgInstance.dualFuelIndicatorPort = 500;
  msgInstance.dualFuelIndicatorStar = 500;
  msgInstance.fuelFlowRate = 100.432;
  msgInstance.dualHydraulicGuageEmg = 200;
  msgInstance.dualHydraulicGuageUC = 200;
  msgInstance.machNumber = 1.54;
  msgInstance.rightExternalWingFuelTankIndicator = true;
  msgInstance.leftExternalWingFuelTankIndicator = true;
  msgInstance.rightInternalWingFuelTankIndicator = true;
  msgInstance.leftInternalWingFuelTankIndicator = true;
  msgInstance.upperbayFuelTankIndicator = true;
  msgInstance.centerlineFuelTankIndicator = false;
  msgInstance.temperatureEGT = 650;
  msgInstance.altitudeAboveSeaLevel = 30000;
  msgInstance.altitudeAboveSeaLevelFlag = true;
  msgInstance.accelerometer = 2;
  msgInstance.airspeedMachMeter = 1.2;
  msgInstance.verticalSpeedIndicator = 104.32;
  msgInstance.incidenceIndicatorRed = false;
  msgInstance.incidenceIndicatorAmber = false;
  msgInstance.incidenceIndicatorGreen = true;
  msgInstance.heading = 20.54;
  msgInstance.altitudeAboveGroundLevel = 25000;
  msgInstance.altitudeAboveGroundLevelFlag = true;
  msgInstance.rollDegrees = 20.35;
  msgInstance.pitchDegrees = 16.35;

  cout << "=== [Publisher] writing a message containing :" << endl;
  cout << "    ID  : " << msgInstance.ID << endl;
  cout << "    RPM : \"" << msgInstance.RPM << "\"" << endl;
  
  cout << "    Thrust : \"" << msgInstance.Thrust << "\"" << endl;
  cout << "    Dual Fuel indiactor Port side:\""<<msgInstance.dualFuelIndicatorPort  << "\" " << endl;
  cout << "    Dual Fuel indiactor Star side:\""<<msgInstance.dualFuelIndicatorStar  << "\" " << endl;
  cout << "    Rate of fuel flow:\""<<msgInstance.fuelFlowRate  << "\" " << endl;
  cout << "    Dual hydraulic guage Emergency:\""<<msgInstance.dualHydraulicGuageEmg  << "\" " << endl;
  cout << "    Dual hydraulic guage undercarriage:\""<<msgInstance.dualHydraulicGuageUC  << "\" " << endl;
  cout << "    Mach number:\""<<msgInstance.machNumber  << "\" " << endl;
  cout << "    Right external wing fuel transfer indicator:\""<<msgInstance.rightExternalWingFuelTankIndicator  << "\" " << endl;
  cout << "    Left external wing fuel transfer indicator:\""<<msgInstance.leftExternalWingFuelTankIndicator  << "\" " << endl;
  cout << "    Right internal wing fuel transfer indicator:\""<<msgInstance.rightInternalWingFuelTankIndicator  << "\" " << endl;
  cout << "    Left internal wing fuel transfer indicator:\""<<msgInstance.leftInternalWingFuelTankIndicator  << "\" " << endl;
  cout << "    Upperbay Fuel transfer indicator:\""<<msgInstance.upperbayFuelTankIndicator  << "\" " << endl;
  cout << "    Centerline fuel transfer indicator :\""<<msgInstance.centerlineFuelTankIndicator  << "\" " << endl;
  cout << "    EGT temperature in degrees celcius:\""<<msgInstance.temperatureEGT  << "\" " << endl;
  cout << "    Altitude above sea level:\""<<msgInstance.altitudeAboveSeaLevel  << "\" " << endl;
  cout << "    Altiutude above sea level flag:\""<<msgInstance.altitudeAboveSeaLevelFlag  << "\" " << endl;
  cout << "    Accelerometer:\""<<msgInstance.accelerometer  << "\" " << endl;
  cout << "    Air speed mach meter:\""<<msgInstance.airspeedMachMeter  << "\" " << endl;
  cout << "    Vertical speed indicator:\""<<msgInstance.verticalSpeedIndicator  << "\" " << endl;
  cout << "    Angle of attack red flag:\""<<msgInstance.incidenceIndicatorRed  << "\" " << endl;
  cout << "    Angle of attack amber flag:\""<<msgInstance.incidenceIndicatorAmber  << "\" " << endl;
  cout << "    Angle of attack green flag:\""<<msgInstance.incidenceIndicatorGreen  << "\" " << endl;
  cout << "    Magnetic heading:\""<<msgInstance.heading  << "\" " << endl;
  cout << "    Atitude above ground level:\""<<msgInstance.altitudeAboveGroundLevel  << "\" " << endl;
  cout << "    Altitude above ground level flag:\""<<msgInstance.altitudeAboveGroundLevelFlag  << "\" " << endl;
  cout << "    Roll angle in degrees:\""<<msgInstance.rollDegrees  << "\" " << endl;
  cout << "    Pitch angle in degrees:\""<<msgInstance.pitchDegrees  << "\" " << endl;
  





  ReturnCode_t status = FDMWriter->write(msgInstance, NULL);
  checkStatus(status, "MsgDataWriter::write");
  os_nanoSleep(delay_2ms);

  /* Remove the DataWriters */
  mgr->deleteWriter();

  /* Remove the Publisher. */
  mgr->deletePublisher();

  /* Remove the Topics. */
  mgr->deleteTopic();

  /* Remove Participant. */
  mgr->deleteParticipant();

  delete mgr;
  return 0;
}
