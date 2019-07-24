#ifndef DAQ_DATASPLTYPES_H
#define DAQ_DATASPLTYPES_H

#include "ccpp_DAQ_Data.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __DAQ_Data_DAQ_Data__load (c_base base);

extern c_metaObject __DAQ_Data_DaqData__load (c_base base);
extern const char * __DAQ_Data_DaqData__keys (void);
extern const char * __DAQ_Data_DaqData__name (void);
struct _DAQ_Data_DaqData ;
extern  c_bool __DAQ_Data_DaqData__copyIn(c_base base, struct DAQ_Data::DaqData *from, struct _DAQ_Data_DaqData *to);
extern  void __DAQ_Data_DaqData__copyOut(void *_from, void *_to);
struct _DAQ_Data_DaqData {
    c_long dID;
    c_bool BAT;
    c_bool GEN;
    c_bool ALT;
    c_bool INV;
    c_bool HORN;
    c_bool ProbeHeat;
    c_bool Servo;
    c_bool Missiles;
    c_bool Rockets;
    c_bool Guns;
    c_bool Bombs;
    c_bool Auto;
    c_bool BLANK;
    c_bool GCSTransf;
    c_bool Avionics;
    c_double Stick;
    c_double Throttle;
    c_bool Pressurization;
    c_bool IFFOVR;
    c_bool CB24_MainLPCocx;
    c_bool CB24_HYD_Press;
    c_bool CB24_CDU;
    c_bool CB24_ASI;
    c_bool CB24_HDR;
    c_bool CB24_AC_Pitch;
    c_bool CB24_LP_Pump_Port;
    c_bool CB24_UC_Ctrl;
    c_bool CB24_MSTR_ARMT;
    c_bool CB24_GPS;
    c_bool CB24_WarningLights;
    c_bool CB24_ServoCtrl;
    c_bool CB24_LP_Pump_STBD;
    c_bool CB24_UC_Pos_Indicator;
    c_bool CB24_SI;
    c_bool CB24_Oxy1;
    c_bool CB24_Oxy2;
    c_bool CB24_EMG_HD_Pump;
    c_bool CB24_UHF;
    c_bool CB24_IFF;
    c_bool CB24_AH;
    c_bool CB24_CAB_T;
    c_bool CB24_START;
    c_bool CB24_MBM;
    c_bool CDU_Page_L1;
    c_bool CDU_Page_L2;
    c_bool CDU_Page_L3;
    c_bool CDU_Page_L4;
    c_bool CDU_Page_L5;
    c_bool CDU_Page_R1;
    c_bool CDU_Page_R2;
    c_bool CDU_Page_R3;
    c_bool CDU_Page_R4;
    c_bool CDU_Page_R5;
    c_bool CDU_Left_TST;
    c_bool CDU_Left_PRV;
    c_bool CDU_Left_NXT;
    c_bool CDU_Left_BRT;
    c_bool CDU_Left_DIM;
    c_bool CDU_Numpad_N1;
    c_bool CDU_Numpad_N2;
    c_bool CDU_Numpad_N3;
    c_bool CDU_Numpad_N4;
    c_bool CDU_Numpad_N5;
    c_bool CDU_Numpad_N6;
    c_bool CDU_Numpad_N7;
    c_bool CDU_Numpad_N8;
    c_bool CDU_Numpad_N9;
    c_bool CDU_Numpad_N_Ent;
    c_bool CDU_Numpad_N0;
    c_bool CDU_Numpad_N_CLR;
    c_bool CDU_Right_ATK;
    c_bool CDU_Right_AA;
    c_bool CDU_Right_REC;
    c_bool CDU_Right_NAV;
    c_bool CDU_Right_DIV;
    c_bool CDU_Right_MEN;
    c_bool CDU_Right_OPS;
    c_bool CDU_Right_EMG;
    c_bool CDU_Right_GUID;
    c_bool CDU_Right_FUEL;
    c_bool CDU_Right_FIX;
    c_bool CDU_Right_N12;
    c_bool CDU_Right_ALT;
    c_bool CDU_Right_IFF;
    c_bool CDU_Right_DCL;
    c_bool CDU_Right_N16;
    c_bool UFP_Left_N1;
    c_bool UFP_Left_ACK;
    c_bool UFP_Left_MEN;
    c_bool UFP_Left_NT;
    c_bool UFP_Left_FW;
    c_bool UFP_Left_SGL;
    c_bool UFP_Left_NAV;
    c_bool UFP_Left_TH;
    c_bool UFP_Left_NXT;
    c_bool UFP_Left_N10;
    c_bool UFP_Left_CHR;
    c_bool UFP_Left_IFF;
    c_bool UFP_Numpad_N1;
    c_bool UFP_Numpad_N2;
    c_bool UFP_Numpad_N3;
    c_bool UFP_Numpad_N4;
    c_bool UFP_Numpad_N5;
    c_bool UFP_Numpad_N6;
    c_bool UFP_Numpad_N7;
    c_bool UFP_Numpad_N8;
    c_bool UFP_Numpad_N9;
    c_bool UFP_Numpad_N_Ent;
    c_bool UFP_Numpad_N0;
    c_bool UFP_Numpad_N_CLR;
    c_bool UFP_Right_DRF_CO;
    c_bool UFP_Right_VEL;
    c_bool UFP_Right_DCL;
    c_bool NAU;
    c_bool IFFON;
    c_bool OverSpeed;
    c_bool GauTst;
    c_bool IncidTst;
    c_bool CbyF;
    c_bool FuelDump;
    c_bool UC_Down;
    c_bool TankJet;
    c_bool WinJet;
    c_bool FuselageJet;
    c_bool Prty;
    c_bool REC;
    c_bool UNK;
    c_bool ABrk_Override;
    c_bool MainLP;
    c_bool LPPump1;
    c_bool LPPump2;
    c_bool AB_Left;
    c_bool IGN_Ventil;
    c_bool StartIGN;
};

#endif
