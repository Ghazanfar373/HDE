
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
 * LOGICAL_NAME:    FDMDataSubscriber.cpp
 * FUNCTION:        OpenSplice FDM example code.
 * MODULE:          FDM for the C++ programming language.
 * DATE             September 2010.
 ************************************************************************
 *
 * This file contains the implementation for the 'FDMDataSubscriber' executable.
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
  os_time delay_200ms = { 0, 200000000 };
  MsgSeq msgList;
  SampleInfoSeq infoSeq;

  DDSEntityManager *mgr = new DDSEntityManager();

  // create domain participant
  mgr->createParticipant("FDM example");

  //create type
  MsgTypeSupport_var mt = new MsgTypeSupport();
  mgr->registerType(mt.in());

 //create Topic
 char topic_name[] = "FDMData_Msg";
 mgr->createTopic(topic_name);

  //create Subscriber
  mgr->createSubscriber();

  // create DataReader
  mgr->createReader();

  DataReader_ptr dreader = mgr->getReader();
  MsgDataReader_var FDMReader = MsgDataReader::_narrow(dreader);
  checkHandle(FDMReader, "MsgDataReader::_narrow");

  cout << "=== [Subscriber] Ready ..." << endl;

  bool closed = false;
  ReturnCode_t status =  - 1;
  int count = 0;
  while (!closed && count < 1500) // We dont want the example to run indefinitely
  {
    status = FDMReader->take(msgList, infoSeq, LENGTH_UNLIMITED,
      ANY_SAMPLE_STATE, ANY_VIEW_STATE, ANY_INSTANCE_STATE);
    checkStatus(status, "msgDataReader::take");
    for (CORBA::ULong j = 0; j < msgList.length(); j++)
    {
      cout << "=== [Subscriber] message received :" << endl;
      cout << "    ID  : " << msgList[j].ID << endl;
      cout << "    RPM : \"" << msgList[j].RPM << "\"" << endl;
      
      cout << "    Thrust : \"" << msgList[j].Thrust << "\"" << endl;

      cout << "    Dual Fuel indiactor Port side:\""<<msgList[j].dualFuelIndicatorPort  << "\" " << endl;
      cout << "    Dual Fuel indiactor Star side:\""<<msgList[j].dualFuelIndicatorStar  << "\" " << endl;
      cout << "    Rate of fuel flow:\""<<msgList[j].fuelFlowRate  << "\" " << endl;
      cout << "    Dual hydraulic guage Emergency:\""<<msgList[j].dualHydraulicGuageEmg  << "\" " << endl;
      cout << "    Dual hydraulic guage undercarriage:\""<<msgList[j].dualHydraulicGuageUC  << "\" " << endl;
      cout << "    Mach number:\""<<msgList[j].machNumber  << "\" " << endl;
      cout << "    Right external wing fuel transfer indicator:\""<<msgList[j].rightExternalWingFuelTankIndicator  << "\" " << endl;
      cout << "    Left external wing fuel transfer indicator:\""<<msgList[j].leftExternalWingFuelTankIndicator  << "\" " << endl;
      cout << "    Right internal wing fuel transfer indicator:\""<<msgList[j].rightInternalWingFuelTankIndicator  << "\" " << endl;
      cout << "    Left internal wing fuel transfer indicator:\""<<msgList[j].leftInternalWingFuelTankIndicator  << "\" " << endl;
      cout << "    Upperbay Fuel transfer indicator:\""<<msgList[j].upperbayFuelTankIndicator  << "\" " << endl;
      cout << "    Centerline fuel transfer indicator:\""<<msgList[j].centerlineFuelTankIndicator  << "\" " << endl;
      cout << "    EGT temperature in degrees celcius:\""<<msgList[j].temperatureEGT  << "\" " << endl;
      cout << "    Altitude above sea level:\""<<msgList[j].altitudeAboveSeaLevel  << "\" " << endl;
      cout << "    Altiutude above sea level flag:\""<<msgList[j].altitudeAboveSeaLevelFlag  << "\" " << endl;
      cout << "    Accelerometer:\""<<msgList[j].accelerometer  << "\" " << endl;
      cout << "    Air speed mach meter:\""<<msgList[j].airspeedMachMeter  << "\" " << endl;
      cout << "    Vertical speed indicator:\""<<msgList[j].verticalSpeedIndicator  << "\" " << endl;
      cout << "    Angle of attack red flag:\""<<msgList[j].incidenceIndicatorRed  << "\" " << endl;
      cout << "    Angle of attack amber flag:\""<<msgList[j].incidenceIndicatorAmber  << "\" " << endl;
      cout << "    Angle of attack green flag:\""<<msgList[j].incidenceIndicatorGreen  << "\" " << endl;
      cout << "    Magnetic heading:\""<<msgList[j].heading  << "\" " << endl;
      cout << "    Atitude above ground level:\""<<msgList[j].altitudeAboveGroundLevel  << "\" " << endl;
      cout << "    Altitude above ground level flag:\""<<msgList[j].altitudeAboveGroundLevelFlag  << "\" " << endl;
      cout << "    Roll angle in degrees:\""<<msgList[j].rollDegrees  << "\" " << endl;
      cout << "    Pitch angle in degrees:\""<<msgList[j].pitchDegrees  << "\" " << endl;
  
      closed = true;
    }
    status = FDMReader->return_loan(msgList, infoSeq);
    checkStatus(status, "MsgDataReader::return_loan");
    os_nanoSleep(delay_200ms);
    ++count;
  }

  os_nanoSleep(delay_2ms);

  //cleanup
  mgr->deleteReader();
  mgr->deleteSubscriber();
  mgr->deleteTopic();
  mgr->deleteParticipant();

  delete mgr;
  return 0;
}
