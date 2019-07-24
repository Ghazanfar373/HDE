//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DAQ_Data.h
//  Source: DAQ_Data.idl
//  Generated: Tue Dec 11 10:08:45 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _DAQ_DATA_H_
#define _DAQ_DATA_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"

namespace DAQ_Data
{
   struct DaqData;

   struct DaqData
   {
      DDS::Long dID;
      DDS::Boolean BAT;
      DDS::Boolean GEN;
      DDS::Boolean ALT;
      DDS::Boolean INV;
      DDS::Boolean HORN;
      DDS::Boolean ProbeHeat;
      DDS::Boolean Servo;
      DDS::Boolean Missiles;
      DDS::Boolean Rockets;
      DDS::Boolean Guns;
      DDS::Boolean Bombs;
      DDS::Boolean Auto;
      DDS::Boolean BLANK;
      DDS::Boolean GCSTransf;
      DDS::Boolean Avionics;
      DDS::Double Stick;
      DDS::Double Throttle;
      DDS::Boolean Pressurization;
      DDS::Boolean IFFOVR;
      DDS::Boolean CB24_MainLPCocx;
      DDS::Boolean CB24_HYD_Press;
      DDS::Boolean CB24_CDU;
      DDS::Boolean CB24_ASI;
      DDS::Boolean CB24_HDR;
      DDS::Boolean CB24_AC_Pitch;
      DDS::Boolean CB24_LP_Pump_Port;
      DDS::Boolean CB24_UC_Ctrl;
      DDS::Boolean CB24_MSTR_ARMT;
      DDS::Boolean CB24_GPS;
      DDS::Boolean CB24_WarningLights;
      DDS::Boolean CB24_ServoCtrl;
      DDS::Boolean CB24_LP_Pump_STBD;
      DDS::Boolean CB24_UC_Pos_Indicator;
      DDS::Boolean CB24_SI;
      DDS::Boolean CB24_Oxy1;
      DDS::Boolean CB24_Oxy2;
      DDS::Boolean CB24_EMG_HD_Pump;
      DDS::Boolean CB24_UHF;
      DDS::Boolean CB24_IFF;
      DDS::Boolean CB24_AH;
      DDS::Boolean CB24_CAB_T;
      DDS::Boolean CB24_START;
      DDS::Boolean CB24_MBM;
      DDS::Boolean CDU_Page_L1;
      DDS::Boolean CDU_Page_L2;
      DDS::Boolean CDU_Page_L3;
      DDS::Boolean CDU_Page_L4;
      DDS::Boolean CDU_Page_L5;
      DDS::Boolean CDU_Page_R1;
      DDS::Boolean CDU_Page_R2;
      DDS::Boolean CDU_Page_R3;
      DDS::Boolean CDU_Page_R4;
      DDS::Boolean CDU_Page_R5;
      DDS::Boolean CDU_Left_TST;
      DDS::Boolean CDU_Left_PRV;
      DDS::Boolean CDU_Left_NXT;
      DDS::Boolean CDU_Left_BRT;
      DDS::Boolean CDU_Left_DIM;
      DDS::Boolean CDU_Numpad_N1;
      DDS::Boolean CDU_Numpad_N2;
      DDS::Boolean CDU_Numpad_N3;
      DDS::Boolean CDU_Numpad_N4;
      DDS::Boolean CDU_Numpad_N5;
      DDS::Boolean CDU_Numpad_N6;
      DDS::Boolean CDU_Numpad_N7;
      DDS::Boolean CDU_Numpad_N8;
      DDS::Boolean CDU_Numpad_N9;
      DDS::Boolean CDU_Numpad_N_Ent;
      DDS::Boolean CDU_Numpad_N0;
      DDS::Boolean CDU_Numpad_N_CLR;
      DDS::Boolean CDU_Right_ATK;
      DDS::Boolean CDU_Right_AA;
      DDS::Boolean CDU_Right_REC;
      DDS::Boolean CDU_Right_NAV;
      DDS::Boolean CDU_Right_DIV;
      DDS::Boolean CDU_Right_MEN;
      DDS::Boolean CDU_Right_OPS;
      DDS::Boolean CDU_Right_EMG;
      DDS::Boolean CDU_Right_GUID;
      DDS::Boolean CDU_Right_FUEL;
      DDS::Boolean CDU_Right_FIX;
      DDS::Boolean CDU_Right_N12;
      DDS::Boolean CDU_Right_ALT;
      DDS::Boolean CDU_Right_IFF;
      DDS::Boolean CDU_Right_DCL;
      DDS::Boolean CDU_Right_N16;
      DDS::Boolean UFP_Left_N1;
      DDS::Boolean UFP_Left_ACK;
      DDS::Boolean UFP_Left_MEN;
      DDS::Boolean UFP_Left_NT;
      DDS::Boolean UFP_Left_FW;
      DDS::Boolean UFP_Left_SGL;
      DDS::Boolean UFP_Left_NAV;
      DDS::Boolean UFP_Left_TH;
      DDS::Boolean UFP_Left_NXT;
      DDS::Boolean UFP_Left_N10;
      DDS::Boolean UFP_Left_CHR;
      DDS::Boolean UFP_Left_IFF;
      DDS::Boolean UFP_Numpad_N1;
      DDS::Boolean UFP_Numpad_N2;
      DDS::Boolean UFP_Numpad_N3;
      DDS::Boolean UFP_Numpad_N4;
      DDS::Boolean UFP_Numpad_N5;
      DDS::Boolean UFP_Numpad_N6;
      DDS::Boolean UFP_Numpad_N7;
      DDS::Boolean UFP_Numpad_N8;
      DDS::Boolean UFP_Numpad_N9;
      DDS::Boolean UFP_Numpad_N_Ent;
      DDS::Boolean UFP_Numpad_N0;
      DDS::Boolean UFP_Numpad_N_CLR;
      DDS::Boolean UFP_Right_DRF_CO;
      DDS::Boolean UFP_Right_VEL;
      DDS::Boolean UFP_Right_DCL;
      DDS::Boolean NAU;
      DDS::Boolean IFFON;
      DDS::Boolean OverSpeed;
      DDS::Boolean GauTst;
      DDS::Boolean IncidTst;
      DDS::Boolean CbyF;
      DDS::Boolean FuelDump;
      DDS::Boolean UC_Down;
      DDS::Boolean TankJet;
      DDS::Boolean WinJet;
      DDS::Boolean FuselageJet;
      DDS::Boolean Prty;
      DDS::Boolean REC;
      DDS::Boolean UNK;
      DDS::Boolean ABrk_Override;
      DDS::Boolean MainLP;
      DDS::Boolean LPPump1;
      DDS::Boolean LPPump2;
      DDS::Boolean AB_Left;
      DDS::Boolean IGN_Ventil;
      DDS::Boolean StartIGN;
   };

   typedef DDS_DCPSStruct_var < DaqData> DaqData_var;
   typedef DaqData&DaqData_out;
}




#endif 