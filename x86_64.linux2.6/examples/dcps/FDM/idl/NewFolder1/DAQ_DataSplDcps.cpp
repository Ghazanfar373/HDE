#include "DAQ_DataSplDcps.h"
#include "ccpp_DAQ_Data.h"

const char *
__DAQ_Data_DaqData__name(void)
{
    return (const char*)"DAQ_Data::DaqData";
}

const char *
__DAQ_Data_DaqData__keys(void)
{
    return (const char*)"dID";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>

c_bool
__DAQ_Data_DaqData__copyIn(
    c_base base,
    struct ::DAQ_Data::DaqData *from,
    struct _DAQ_Data_DaqData *to)
{
    c_bool result = TRUE;

    to->dID = (c_long)from->dID;
    to->BAT = (c_bool)from->BAT;
    to->GEN = (c_bool)from->GEN;
    to->ALT = (c_bool)from->ALT;
    to->INV = (c_bool)from->INV;
    to->HORN = (c_bool)from->HORN;
    to->ProbeHeat = (c_bool)from->ProbeHeat;
    to->Servo = (c_bool)from->Servo;
    to->Missiles = (c_bool)from->Missiles;
    to->Rockets = (c_bool)from->Rockets;
    to->Guns = (c_bool)from->Guns;
    to->Bombs = (c_bool)from->Bombs;
    to->Auto = (c_bool)from->Auto;
    to->BLANK = (c_bool)from->BLANK;
    to->GCSTransf = (c_bool)from->GCSTransf;
    to->Avionics = (c_bool)from->Avionics;
    to->Stick = (c_double)from->Stick;
    to->Throttle = (c_double)from->Throttle;
    to->Pressurization = (c_bool)from->Pressurization;
    to->IFFOVR = (c_bool)from->IFFOVR;
    to->CB24_MainLPCocx = (c_bool)from->CB24_MainLPCocx;
    to->CB24_HYD_Press = (c_bool)from->CB24_HYD_Press;
    to->CB24_CDU = (c_bool)from->CB24_CDU;
    to->CB24_ASI = (c_bool)from->CB24_ASI;
    to->CB24_HDR = (c_bool)from->CB24_HDR;
    to->CB24_AC_Pitch = (c_bool)from->CB24_AC_Pitch;
    to->CB24_LP_Pump_Port = (c_bool)from->CB24_LP_Pump_Port;
    to->CB24_UC_Ctrl = (c_bool)from->CB24_UC_Ctrl;
    to->CB24_MSTR_ARMT = (c_bool)from->CB24_MSTR_ARMT;
    to->CB24_GPS = (c_bool)from->CB24_GPS;
    to->CB24_WarningLights = (c_bool)from->CB24_WarningLights;
    to->CB24_ServoCtrl = (c_bool)from->CB24_ServoCtrl;
    to->CB24_LP_Pump_STBD = (c_bool)from->CB24_LP_Pump_STBD;
    to->CB24_UC_Pos_Indicator = (c_bool)from->CB24_UC_Pos_Indicator;
    to->CB24_SI = (c_bool)from->CB24_SI;
    to->CB24_Oxy1 = (c_bool)from->CB24_Oxy1;
    to->CB24_Oxy2 = (c_bool)from->CB24_Oxy2;
    to->CB24_EMG_HD_Pump = (c_bool)from->CB24_EMG_HD_Pump;
    to->CB24_UHF = (c_bool)from->CB24_UHF;
    to->CB24_IFF = (c_bool)from->CB24_IFF;
    to->CB24_AH = (c_bool)from->CB24_AH;
    to->CB24_CAB_T = (c_bool)from->CB24_CAB_T;
    to->CB24_START = (c_bool)from->CB24_START;
    to->CB24_MBM = (c_bool)from->CB24_MBM;
    to->CDU_Page_L1 = (c_bool)from->CDU_Page_L1;
    to->CDU_Page_L2 = (c_bool)from->CDU_Page_L2;
    to->CDU_Page_L3 = (c_bool)from->CDU_Page_L3;
    to->CDU_Page_L4 = (c_bool)from->CDU_Page_L4;
    to->CDU_Page_L5 = (c_bool)from->CDU_Page_L5;
    to->CDU_Page_R1 = (c_bool)from->CDU_Page_R1;
    to->CDU_Page_R2 = (c_bool)from->CDU_Page_R2;
    to->CDU_Page_R3 = (c_bool)from->CDU_Page_R3;
    to->CDU_Page_R4 = (c_bool)from->CDU_Page_R4;
    to->CDU_Page_R5 = (c_bool)from->CDU_Page_R5;
    to->CDU_Left_TST = (c_bool)from->CDU_Left_TST;
    to->CDU_Left_PRV = (c_bool)from->CDU_Left_PRV;
    to->CDU_Left_NXT = (c_bool)from->CDU_Left_NXT;
    to->CDU_Left_BRT = (c_bool)from->CDU_Left_BRT;
    to->CDU_Left_DIM = (c_bool)from->CDU_Left_DIM;
    to->CDU_Numpad_N1 = (c_bool)from->CDU_Numpad_N1;
    to->CDU_Numpad_N2 = (c_bool)from->CDU_Numpad_N2;
    to->CDU_Numpad_N3 = (c_bool)from->CDU_Numpad_N3;
    to->CDU_Numpad_N4 = (c_bool)from->CDU_Numpad_N4;
    to->CDU_Numpad_N5 = (c_bool)from->CDU_Numpad_N5;
    to->CDU_Numpad_N6 = (c_bool)from->CDU_Numpad_N6;
    to->CDU_Numpad_N7 = (c_bool)from->CDU_Numpad_N7;
    to->CDU_Numpad_N8 = (c_bool)from->CDU_Numpad_N8;
    to->CDU_Numpad_N9 = (c_bool)from->CDU_Numpad_N9;
    to->CDU_Numpad_N_Ent = (c_bool)from->CDU_Numpad_N_Ent;
    to->CDU_Numpad_N0 = (c_bool)from->CDU_Numpad_N0;
    to->CDU_Numpad_N_CLR = (c_bool)from->CDU_Numpad_N_CLR;
    to->CDU_Right_ATK = (c_bool)from->CDU_Right_ATK;
    to->CDU_Right_AA = (c_bool)from->CDU_Right_AA;
    to->CDU_Right_REC = (c_bool)from->CDU_Right_REC;
    to->CDU_Right_NAV = (c_bool)from->CDU_Right_NAV;
    to->CDU_Right_DIV = (c_bool)from->CDU_Right_DIV;
    to->CDU_Right_MEN = (c_bool)from->CDU_Right_MEN;
    to->CDU_Right_OPS = (c_bool)from->CDU_Right_OPS;
    to->CDU_Right_EMG = (c_bool)from->CDU_Right_EMG;
    to->CDU_Right_GUID = (c_bool)from->CDU_Right_GUID;
    to->CDU_Right_FUEL = (c_bool)from->CDU_Right_FUEL;
    to->CDU_Right_FIX = (c_bool)from->CDU_Right_FIX;
    to->CDU_Right_N12 = (c_bool)from->CDU_Right_N12;
    to->CDU_Right_ALT = (c_bool)from->CDU_Right_ALT;
    to->CDU_Right_IFF = (c_bool)from->CDU_Right_IFF;
    to->CDU_Right_DCL = (c_bool)from->CDU_Right_DCL;
    to->CDU_Right_N16 = (c_bool)from->CDU_Right_N16;
    to->UFP_Left_N1 = (c_bool)from->UFP_Left_N1;
    to->UFP_Left_ACK = (c_bool)from->UFP_Left_ACK;
    to->UFP_Left_MEN = (c_bool)from->UFP_Left_MEN;
    to->UFP_Left_NT = (c_bool)from->UFP_Left_NT;
    to->UFP_Left_FW = (c_bool)from->UFP_Left_FW;
    to->UFP_Left_SGL = (c_bool)from->UFP_Left_SGL;
    to->UFP_Left_NAV = (c_bool)from->UFP_Left_NAV;
    to->UFP_Left_TH = (c_bool)from->UFP_Left_TH;
    to->UFP_Left_NXT = (c_bool)from->UFP_Left_NXT;
    to->UFP_Left_N10 = (c_bool)from->UFP_Left_N10;
    to->UFP_Left_CHR = (c_bool)from->UFP_Left_CHR;
    to->UFP_Left_IFF = (c_bool)from->UFP_Left_IFF;
    to->UFP_Numpad_N1 = (c_bool)from->UFP_Numpad_N1;
    to->UFP_Numpad_N2 = (c_bool)from->UFP_Numpad_N2;
    to->UFP_Numpad_N3 = (c_bool)from->UFP_Numpad_N3;
    to->UFP_Numpad_N4 = (c_bool)from->UFP_Numpad_N4;
    to->UFP_Numpad_N5 = (c_bool)from->UFP_Numpad_N5;
    to->UFP_Numpad_N6 = (c_bool)from->UFP_Numpad_N6;
    to->UFP_Numpad_N7 = (c_bool)from->UFP_Numpad_N7;
    to->UFP_Numpad_N8 = (c_bool)from->UFP_Numpad_N8;
    to->UFP_Numpad_N9 = (c_bool)from->UFP_Numpad_N9;
    to->UFP_Numpad_N_Ent = (c_bool)from->UFP_Numpad_N_Ent;
    to->UFP_Numpad_N0 = (c_bool)from->UFP_Numpad_N0;
    to->UFP_Numpad_N_CLR = (c_bool)from->UFP_Numpad_N_CLR;
    to->UFP_Right_DRF_CO = (c_bool)from->UFP_Right_DRF_CO;
    to->UFP_Right_VEL = (c_bool)from->UFP_Right_VEL;
    to->UFP_Right_DCL = (c_bool)from->UFP_Right_DCL;
    to->NAU = (c_bool)from->NAU;
    to->IFFON = (c_bool)from->IFFON;
    to->OverSpeed = (c_bool)from->OverSpeed;
    to->GauTst = (c_bool)from->GauTst;
    to->IncidTst = (c_bool)from->IncidTst;
    to->CbyF = (c_bool)from->CbyF;
    to->FuelDump = (c_bool)from->FuelDump;
    to->UC_Down = (c_bool)from->UC_Down;
    to->TankJet = (c_bool)from->TankJet;
    to->WinJet = (c_bool)from->WinJet;
    to->FuselageJet = (c_bool)from->FuselageJet;
    to->Prty = (c_bool)from->Prty;
    to->REC = (c_bool)from->REC;
    to->UNK = (c_bool)from->UNK;
    to->ABrk_Override = (c_bool)from->ABrk_Override;
    to->MainLP = (c_bool)from->MainLP;
    to->LPPump1 = (c_bool)from->LPPump1;
    to->LPPump2 = (c_bool)from->LPPump2;
    to->AB_Left = (c_bool)from->AB_Left;
    to->IGN_Ventil = (c_bool)from->IGN_Ventil;
    to->StartIGN = (c_bool)from->StartIGN;
    return result;
}

void
__DAQ_Data_DaqData__copyOut(
    void *_from,
    void *_to)
{
    struct _DAQ_Data_DaqData *from = (struct _DAQ_Data_DaqData *)_from;
    struct ::DAQ_Data::DaqData *to = (struct ::DAQ_Data::DaqData *)_to;
    to->dID = (::DDS::Long)from->dID;
    to->BAT = (::DDS::Boolean)from->BAT;
    to->GEN = (::DDS::Boolean)from->GEN;
    to->ALT = (::DDS::Boolean)from->ALT;
    to->INV = (::DDS::Boolean)from->INV;
    to->HORN = (::DDS::Boolean)from->HORN;
    to->ProbeHeat = (::DDS::Boolean)from->ProbeHeat;
    to->Servo = (::DDS::Boolean)from->Servo;
    to->Missiles = (::DDS::Boolean)from->Missiles;
    to->Rockets = (::DDS::Boolean)from->Rockets;
    to->Guns = (::DDS::Boolean)from->Guns;
    to->Bombs = (::DDS::Boolean)from->Bombs;
    to->Auto = (::DDS::Boolean)from->Auto;
    to->BLANK = (::DDS::Boolean)from->BLANK;
    to->GCSTransf = (::DDS::Boolean)from->GCSTransf;
    to->Avionics = (::DDS::Boolean)from->Avionics;
    to->Stick = (::DDS::Double)from->Stick;
    to->Throttle = (::DDS::Double)from->Throttle;
    to->Pressurization = (::DDS::Boolean)from->Pressurization;
    to->IFFOVR = (::DDS::Boolean)from->IFFOVR;
    to->CB24_MainLPCocx = (::DDS::Boolean)from->CB24_MainLPCocx;
    to->CB24_HYD_Press = (::DDS::Boolean)from->CB24_HYD_Press;
    to->CB24_CDU = (::DDS::Boolean)from->CB24_CDU;
    to->CB24_ASI = (::DDS::Boolean)from->CB24_ASI;
    to->CB24_HDR = (::DDS::Boolean)from->CB24_HDR;
    to->CB24_AC_Pitch = (::DDS::Boolean)from->CB24_AC_Pitch;
    to->CB24_LP_Pump_Port = (::DDS::Boolean)from->CB24_LP_Pump_Port;
    to->CB24_UC_Ctrl = (::DDS::Boolean)from->CB24_UC_Ctrl;
    to->CB24_MSTR_ARMT = (::DDS::Boolean)from->CB24_MSTR_ARMT;
    to->CB24_GPS = (::DDS::Boolean)from->CB24_GPS;
    to->CB24_WarningLights = (::DDS::Boolean)from->CB24_WarningLights;
    to->CB24_ServoCtrl = (::DDS::Boolean)from->CB24_ServoCtrl;
    to->CB24_LP_Pump_STBD = (::DDS::Boolean)from->CB24_LP_Pump_STBD;
    to->CB24_UC_Pos_Indicator = (::DDS::Boolean)from->CB24_UC_Pos_Indicator;
    to->CB24_SI = (::DDS::Boolean)from->CB24_SI;
    to->CB24_Oxy1 = (::DDS::Boolean)from->CB24_Oxy1;
    to->CB24_Oxy2 = (::DDS::Boolean)from->CB24_Oxy2;
    to->CB24_EMG_HD_Pump = (::DDS::Boolean)from->CB24_EMG_HD_Pump;
    to->CB24_UHF = (::DDS::Boolean)from->CB24_UHF;
    to->CB24_IFF = (::DDS::Boolean)from->CB24_IFF;
    to->CB24_AH = (::DDS::Boolean)from->CB24_AH;
    to->CB24_CAB_T = (::DDS::Boolean)from->CB24_CAB_T;
    to->CB24_START = (::DDS::Boolean)from->CB24_START;
    to->CB24_MBM = (::DDS::Boolean)from->CB24_MBM;
    to->CDU_Page_L1 = (::DDS::Boolean)from->CDU_Page_L1;
    to->CDU_Page_L2 = (::DDS::Boolean)from->CDU_Page_L2;
    to->CDU_Page_L3 = (::DDS::Boolean)from->CDU_Page_L3;
    to->CDU_Page_L4 = (::DDS::Boolean)from->CDU_Page_L4;
    to->CDU_Page_L5 = (::DDS::Boolean)from->CDU_Page_L5;
    to->CDU_Page_R1 = (::DDS::Boolean)from->CDU_Page_R1;
    to->CDU_Page_R2 = (::DDS::Boolean)from->CDU_Page_R2;
    to->CDU_Page_R3 = (::DDS::Boolean)from->CDU_Page_R3;
    to->CDU_Page_R4 = (::DDS::Boolean)from->CDU_Page_R4;
    to->CDU_Page_R5 = (::DDS::Boolean)from->CDU_Page_R5;
    to->CDU_Left_TST = (::DDS::Boolean)from->CDU_Left_TST;
    to->CDU_Left_PRV = (::DDS::Boolean)from->CDU_Left_PRV;
    to->CDU_Left_NXT = (::DDS::Boolean)from->CDU_Left_NXT;
    to->CDU_Left_BRT = (::DDS::Boolean)from->CDU_Left_BRT;
    to->CDU_Left_DIM = (::DDS::Boolean)from->CDU_Left_DIM;
    to->CDU_Numpad_N1 = (::DDS::Boolean)from->CDU_Numpad_N1;
    to->CDU_Numpad_N2 = (::DDS::Boolean)from->CDU_Numpad_N2;
    to->CDU_Numpad_N3 = (::DDS::Boolean)from->CDU_Numpad_N3;
    to->CDU_Numpad_N4 = (::DDS::Boolean)from->CDU_Numpad_N4;
    to->CDU_Numpad_N5 = (::DDS::Boolean)from->CDU_Numpad_N5;
    to->CDU_Numpad_N6 = (::DDS::Boolean)from->CDU_Numpad_N6;
    to->CDU_Numpad_N7 = (::DDS::Boolean)from->CDU_Numpad_N7;
    to->CDU_Numpad_N8 = (::DDS::Boolean)from->CDU_Numpad_N8;
    to->CDU_Numpad_N9 = (::DDS::Boolean)from->CDU_Numpad_N9;
    to->CDU_Numpad_N_Ent = (::DDS::Boolean)from->CDU_Numpad_N_Ent;
    to->CDU_Numpad_N0 = (::DDS::Boolean)from->CDU_Numpad_N0;
    to->CDU_Numpad_N_CLR = (::DDS::Boolean)from->CDU_Numpad_N_CLR;
    to->CDU_Right_ATK = (::DDS::Boolean)from->CDU_Right_ATK;
    to->CDU_Right_AA = (::DDS::Boolean)from->CDU_Right_AA;
    to->CDU_Right_REC = (::DDS::Boolean)from->CDU_Right_REC;
    to->CDU_Right_NAV = (::DDS::Boolean)from->CDU_Right_NAV;
    to->CDU_Right_DIV = (::DDS::Boolean)from->CDU_Right_DIV;
    to->CDU_Right_MEN = (::DDS::Boolean)from->CDU_Right_MEN;
    to->CDU_Right_OPS = (::DDS::Boolean)from->CDU_Right_OPS;
    to->CDU_Right_EMG = (::DDS::Boolean)from->CDU_Right_EMG;
    to->CDU_Right_GUID = (::DDS::Boolean)from->CDU_Right_GUID;
    to->CDU_Right_FUEL = (::DDS::Boolean)from->CDU_Right_FUEL;
    to->CDU_Right_FIX = (::DDS::Boolean)from->CDU_Right_FIX;
    to->CDU_Right_N12 = (::DDS::Boolean)from->CDU_Right_N12;
    to->CDU_Right_ALT = (::DDS::Boolean)from->CDU_Right_ALT;
    to->CDU_Right_IFF = (::DDS::Boolean)from->CDU_Right_IFF;
    to->CDU_Right_DCL = (::DDS::Boolean)from->CDU_Right_DCL;
    to->CDU_Right_N16 = (::DDS::Boolean)from->CDU_Right_N16;
    to->UFP_Left_N1 = (::DDS::Boolean)from->UFP_Left_N1;
    to->UFP_Left_ACK = (::DDS::Boolean)from->UFP_Left_ACK;
    to->UFP_Left_MEN = (::DDS::Boolean)from->UFP_Left_MEN;
    to->UFP_Left_NT = (::DDS::Boolean)from->UFP_Left_NT;
    to->UFP_Left_FW = (::DDS::Boolean)from->UFP_Left_FW;
    to->UFP_Left_SGL = (::DDS::Boolean)from->UFP_Left_SGL;
    to->UFP_Left_NAV = (::DDS::Boolean)from->UFP_Left_NAV;
    to->UFP_Left_TH = (::DDS::Boolean)from->UFP_Left_TH;
    to->UFP_Left_NXT = (::DDS::Boolean)from->UFP_Left_NXT;
    to->UFP_Left_N10 = (::DDS::Boolean)from->UFP_Left_N10;
    to->UFP_Left_CHR = (::DDS::Boolean)from->UFP_Left_CHR;
    to->UFP_Left_IFF = (::DDS::Boolean)from->UFP_Left_IFF;
    to->UFP_Numpad_N1 = (::DDS::Boolean)from->UFP_Numpad_N1;
    to->UFP_Numpad_N2 = (::DDS::Boolean)from->UFP_Numpad_N2;
    to->UFP_Numpad_N3 = (::DDS::Boolean)from->UFP_Numpad_N3;
    to->UFP_Numpad_N4 = (::DDS::Boolean)from->UFP_Numpad_N4;
    to->UFP_Numpad_N5 = (::DDS::Boolean)from->UFP_Numpad_N5;
    to->UFP_Numpad_N6 = (::DDS::Boolean)from->UFP_Numpad_N6;
    to->UFP_Numpad_N7 = (::DDS::Boolean)from->UFP_Numpad_N7;
    to->UFP_Numpad_N8 = (::DDS::Boolean)from->UFP_Numpad_N8;
    to->UFP_Numpad_N9 = (::DDS::Boolean)from->UFP_Numpad_N9;
    to->UFP_Numpad_N_Ent = (::DDS::Boolean)from->UFP_Numpad_N_Ent;
    to->UFP_Numpad_N0 = (::DDS::Boolean)from->UFP_Numpad_N0;
    to->UFP_Numpad_N_CLR = (::DDS::Boolean)from->UFP_Numpad_N_CLR;
    to->UFP_Right_DRF_CO = (::DDS::Boolean)from->UFP_Right_DRF_CO;
    to->UFP_Right_VEL = (::DDS::Boolean)from->UFP_Right_VEL;
    to->UFP_Right_DCL = (::DDS::Boolean)from->UFP_Right_DCL;
    to->NAU = (::DDS::Boolean)from->NAU;
    to->IFFON = (::DDS::Boolean)from->IFFON;
    to->OverSpeed = (::DDS::Boolean)from->OverSpeed;
    to->GauTst = (::DDS::Boolean)from->GauTst;
    to->IncidTst = (::DDS::Boolean)from->IncidTst;
    to->CbyF = (::DDS::Boolean)from->CbyF;
    to->FuelDump = (::DDS::Boolean)from->FuelDump;
    to->UC_Down = (::DDS::Boolean)from->UC_Down;
    to->TankJet = (::DDS::Boolean)from->TankJet;
    to->WinJet = (::DDS::Boolean)from->WinJet;
    to->FuselageJet = (::DDS::Boolean)from->FuselageJet;
    to->Prty = (::DDS::Boolean)from->Prty;
    to->REC = (::DDS::Boolean)from->REC;
    to->UNK = (::DDS::Boolean)from->UNK;
    to->ABrk_Override = (::DDS::Boolean)from->ABrk_Override;
    to->MainLP = (::DDS::Boolean)from->MainLP;
    to->LPPump1 = (::DDS::Boolean)from->LPPump1;
    to->LPPump2 = (::DDS::Boolean)from->LPPump2;
    to->AB_Left = (::DDS::Boolean)from->AB_Left;
    to->IGN_Ventil = (::DDS::Boolean)from->IGN_Ventil;
    to->StartIGN = (::DDS::Boolean)from->StartIGN;
}

