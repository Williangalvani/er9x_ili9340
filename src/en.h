/****************************************************************************
*  Copyright (c) 2013 by Michael Blandford. All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*  3. Neither the name of the author nor the names of its contributors may
*     be used to endorse or promote products derived from this software
*     without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
*  THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
*  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
*  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
*  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
*  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
*  SUCH DAMAGE.
*
****************************************************************************
* Other Authors:
 * - Andre Bernet
 * - Bertrand Songis
 * - Bryan J. Rentoul (Gruvin)
 * - Cameron Weeks
 * - Erez Raviv
 * - Jean-Pierre Parisy
 * - Karl Szmutny
 * - Michal Hlavinka
 * - Pat Mackenzie
 * - Philip Moss
 * - Rob Thomson
 * - Romolo Manfredini
 * - Thomas Husterer
*
****************************************************************************/


#define STR_ON             "ON "
#define STR_OFF            "OFF"

#define STR_ALTEQ	         "Alt=" 
#define STR_TXEQ		       "\003Tx=Swr"
#define STR_RXEQ		       "Rx="
#define STR_RX  		       "Rx"
#define STR_TRE012AG	     "TRE012AG"

// STR_YELORGRED indexed 3 char each
#define STR_YELORGRED	     "\003---YelOrgRed"
#define STR_A_EQ		       "A ="
#define STR_SOUNDS	       "\006Warn1 ""Warn2 ""Cheap ""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""Siren ""AlmClk""Ratata""Tick  ""Haptc1""Haptc2""Haptc3"
#define STR_SWITCH_WARN	   "Switch Warning"
// STR_TIMER exactly 5 chars long
#define STR_TIMER          "Timer"

// STR_PPMCHANNELS indexed 4 char each
#define STR_PPMCHANNELS	   "\0044CH 6CH 8CH 10CH12CH14CH16CH"

#define STR_MAH_ALARM      "mAh Limit"


// er9x.cpp
// ********
#define STR_LIMITS		     "Limits"
#define STR_EE_LOW_MEM     "EEPROM low mem"
#define STR_ALERT	         " ALERT"
#define STR_THR_NOT_IDLE   "Throttle not idle"
#define STR_RST_THROTTLE   "Reset throttle"
#define STR_PRESS_KEY_SKIP "Press any key to skip"
#define STR_ALARMS_DISABLE "Alarms Disabled"
#define STR_OLD_VER_EEPROM " Old Version EEPROM   CHECK SETTINGS/CALIB"
#define STR_RESET_SWITCHES "Please Reset Switches"
#define STR_LOADING        "LOADING"
#define STR_MESSAGE        "MESSAGE"
#define STR_PRESS_ANY_KEY  "press any Key"
#define STR_MSTACK_UFLOW   "mStack uflow"
#define STR_MSTACK_OFLOW   "mStack oflow"

#define STR_CHANS_GV	     "\004P1  P2  P3  HALFFULLCYC1CYC2CYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16SWCHGV1 GV2 GV3 GV4 GV5 GV6 GV7 THIS"
#define STR_CHANS_RAW	     "\004P1  P2  P3  HALFFULLCYC1CYC2CYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16SWCH"
#define STR_CH	           "CH"
//#define STR_TMR_MODE	     "\003OFFON RUsRU%ELsEL%THsTH%ALsAL%P1 P1%P2 P2%P3 P3%"
#define STR_TRIGA_OPTS			"OFFON THsTH%"

// pers.cpp
// ********
#define STR_ME             "ME        "
#define STR_MODEL          "MODEL     "
#define STR_BAD_EEPROM     "Bad EEprom Data"
#define STR_EE_FORMAT      "EEPROM Formatting"
#define STR_GENWR_ERROR    "genwrite error"
#define STR_EE_OFLOW       "EEPROM overflow"

// templates.cpp
// ***********
#define STR_T_S_4CHAN      "Simple 4-CH"
#define STR_T_TCUT         "T-Cut"
#define STR_T_STICK_TCUT   "Sticky T-Cut"
#define STR_T_V_TAIL       "V-Tail"
#define STR_T_ELEVON       "Elevon\\Delta"
#define STR_T_HELI_SETUP   "Heli Setup"
#define STR_T_GYRO         "Gyro Setup"
#define STR_T_SERVO_TEST   "Servo Test"

// menus.cpp
// ***********
#define STR_TELEM_ITEMS	   "\004----A1= A2= RSSITSSITim1Tim2Alt GaltGspdT1= T2= RPM FUELMah1Mah2CvltBattAmpsMah CtotFasVAccXAccYAccZVspdGvr1Gvr2Gvr3Gvr4Gvr5Gvr6Gvr7FwatRxV Hdg A3= A4= SC1 SC2 SC3 SC4 TmOK"
#define STR_TELEM_SHORT    "\004----TIM1TIM2BATTGvr1Gvr2Gvr3Gvr4Gvr5Gvr6Gvr7"
#define STR_GV             "GV"
#define STR_OFF_ON         "OFFON "
#define STR_HYPH_INV       "\003---INV"
#define STR_VERSION        "Version"
#define STR_TRAINER        "Trainer"
#define STR_SLAVE          "\007Slave" 
#define STR_MENU_DONE      "[MENU] WHEN DONE"
#define STR_CURVES         "Curves"
#define STR_CURVE          "CURVE"
#define STR_GLOBAL_VAR     "GLOBAL VAR"
#define STR_VALUE          "Value"
#define STR_PRESET         "PRESET"
#define STR_CV             "CV"
#define STR_XLIMITS         "LIMITS"
#define STR_COPY_TRIM      "COPY TRIM [MENU]"
#define STR_TELEMETRY      "Telemetry"
#define STR_USR_PROTO_UNITS "UsrProto\037Units"
#define STR_USR_PROTO			 "UsrProto"
#define STR_FRHUB_WSHHI    "\005FrHubWSHhi"
#define STR_MET_IMP        "\003MetImp"
#define STR_A_CHANNEL      "A  channel"
#define STR_ALRM           "alrm"
#define STR_TELEMETRY2     "TELEMETRY2"
#define STR_TX_RSSIALRM    "TxRSSIalrm"
#define STR_NUM_BLADES     "Num Blades"
//#if ALT_ALARM
//#define STR_ALT_ALARM      "AltAlarm"
//#define STR_OFF122400      "\003OFF122400"
//#endif
#define STR_VOLT_THRES     "Volt Thres="
#define STR_GPS_ALTMAIN    "GpsAltMain"
#define STR_CUSTOM_DISP    "Custom Display"
#define STR_FAS_OFFSET     "FAS Offset"
//#define STR_VARIO_SRC_IDX  "Vario: Source\000\132\002\004----vspdA2  "
#define STR_VARIO_SRC      "Vario: Source"
#define STR_VSPD_A2        "\004----vspdA2  "
#define STR_2SWITCH        "\001Switch"
#define STR_2SENSITIVITY   "\001Sensitivity"
#define STR_GLOBAL_VARS    "GlobalVars"
#define STR_GV_SOURCE      "\003---RtmEtmTtmAtmRENRudEleThrAilP1 P2 P3 "
#define STR_TEMPLATES      "TEMPLATES"
#define STR_CHAN_ORDER     "\001Channel Order"
#define STR_SP_RETA        " RETA"
#define STR_CLEAR_MIXES    "CLEAR MIXES [MENU]"
#define STR_SAFETY_SW      "Safety Switches"
#define STR_NUM_VOICE_SW   "Number Voice Sw"
#define STR_V_OPT1         "\007 8 Secs12 Secs16 Secs"
#define STR_VS             "VS"
#define STR_VOICE_OPT      "\006ON    OFF   BOTH  15Secs30Secs60SecsVaribl"
#define STR_CUST_SWITCH    "LOGICAL SWITCHES"
//#define STR_S              "S"
#define STR_15_ON          "\015On"
#define STR_EDIT_MIX       "EDIT MIX "
#define STR_2SOURCE        "\001Source"
#define STR_2WEIGHT        "\001Weight"
#ifdef FMODE_TRIM
#define STR_FMTRIMVAL      "FmTrimVal"
#endif
#define STR_OFFSET         "Offset"
#define STR_2FIX_OFFSET    "\001Fix Offset"
#define STR_FLMODETRIM     "\001FlModetrim"
#define STR_ENABLEEXPO		 "\001EnableExpoDR"
#define STR_2TRIM          "\001Trim"
#define STR_15DIFF         "\010Diff"
#define STR_Curve          "Curve"
#define STR_2WARNING       "\001Warning"
#define STR_2MULTIPLEX     "\001Multpx"
// STR_ADD_MULT_REP indexed 8 chars each
#define STR_ADD_MULT_REP   "\010Add     MultiplyReplace "
#define STR_2DELAY_DOWN    "\001Delay Down"
#define STR_2DELAY_UP      "\001Delay Up"
#define STR_2SLOW_DOWN     "\001Slow  Down"
#define STR_2SLOW_UP       "\001Slow  Up"
#define STR_MAX_MIXERS_EXAB "Max mixers reach: 32\037\037Press [EXIT] to abort"
#define STR_MAX_MIXERS     "Max mixers reach: 32"
#define STR_PRESS_EXIT_AB  "Press [EXIT] to abort"
#define STR_YES_NO_MENU_EXIT         "\003YES\013NO\037\003[MENU]\013[EXIT]"
#define STR_MENU_EXIT      "\003[MENU]\013[EXIT]"
#define STR_DELETE_MIX     "DELETE MIX?"
#define STR_MIX_POPUP      "EDIT\0INSERT\0COPY\0MOVE\0DELETE"
#define STR_MIXER          "MIXER"
// CHR_S S for Slow
#define CHR_S              'S'
// CHR_D D for Delay
#define CHR_D              'D'
// CHR_d d for differential
#define CHR_d              'd'
#define STR_EXPO_DR        "Expo/Dr"
#define STR_4DR_HIMIDLO		 "\007\004DR Hi \004DR Mid\004DR Low"
#define STR_4DR_MID        "\004DR Mid"
#define STR_4DR_LOW        "\004DR Low"
#define STR_4DR_HI         "\004DR Hi"
#define STR_EXPO_TEXT			 "\002Expo\037\037\001Weight\037\037DrSw1\037DrSw2"
#define STR_2EXPO          "\002Expo"
#define STR_DR_SW1         "DrSw1"
#define STR_DR_SW2         "DrSw2"
#define STR_DUP_MODEL      "DUPLICATE MODEL"
#define STR_DELETE_MODEL   "DELETE MODEL"
#define STR_DUPLICATING    "Duplicating model"
#define STR_SETUP          "SETUP"
#define STR_NAME           "Name"
#define STR_VOICE_INDEX    "Voice Index\021MENU"
#define STR_TIMER_TEXT		 "Timer\037TriggerA\037TriggerB\037Timer\037Reset Switch"
#define STR_TRIGGER        "TriggerA"
#define STR_TRIGGERB       "TriggerB"
//STR_COUNT_DOWN_UP indexed, 10 chars each
#define STR_COUNT_DOWN_UP  "\012Count DownCount Up  "
#define STR_T_TRIM         "T-Trim"
#define STR_T_EXPO         "T-Expo"
#define STR_TRIM_INC       "Trim Inc"
// STR_TRIM_OPTIONS indexed 6 chars each
#define STR_TRIM_OPTIONS   "\006Exp   ExFineFine  MediumCoarse"
#define STR_TRIM_PAGE			 "Trim Sw\037Hi.Res Slow/Delay\037Beep Cnt"
#define STR_TRIM_SWITCH    "Trim Sw"
#define STR_BEEP_CENTRE    "Beep Cnt"
#define STR_RETA123        "RETA123"
#define STR_PROTO          "Proto"
// STR_21_USEC after \021 max 4 chars
#define STR_21_USEC        "\021uSec"
#define STR_13_RXNUM       "\013RxNum"
// STR_23_US after \023 max 2 chars
#define STR_23_US          "\023uS"
// STR_PPMFRAME_MSEC before \015 max 9 chars, after max 4 chars
#define STR_PPMFRAME_MSEC  "PPM FrLen\015mSec"
#define STR_SEND_RX_NUM    "Bind  Range"
#define STR_DSM_TYPE       "DSM Type"
#define STR_1ST_CHAN_PROTO "1st Chan\037Proto"
#define STR_PPM_1ST_CHAN   "1st Chan"
#define STR_SHIFT_SEL      "Shift Sel"
// STR_POS_NEG indexed 3 chars each
#define STR_POS_NEG        "\003POSNEG"
#define STR_VOL_PAGE				"Volume Control\037E. Limits\037Trainer\037T-Trim\037T-Expo\037Trim Inc"
#define STR_E_LIMITS       "E. Limits"
#define STR_Trainer        "Trainer"
#define STR_T2THTRIG       "T2ThTrig"
#define STR_AUTO_LIMITS    "Auto Limits"
// STR_1_RETA indexed 1 char each
#define STR_1_RETA         "\001RETA"
#define STR_FL_MODE        "FL MODE"
#define STR_SWITCH_TRIMS   "Switch\037Trims"
#define STR_SWITCH         "Switch"
#define STR_TRIMS          "Trims"
#define STR_MODES          "Modes"
#define STR_SP_FM0         " FM0"
#define STR_SP_FM          " FM"
#define STR_HELI_SETUP     "Heli Setup"
#define STR_HELI_TEXT			 "Swash Type\037Collective\037Swash Ring\037ELE Direction\037AIL Direction\037COL Direction"
#define STR_SWASH_TYPE     "Swash Type"
#define STR_COLLECTIVE     "Collective"
#define STR_SWASH_RING     "Swash Ring"
#define STR_ELE_DIRECTION  "ELE Direction"
#define STR_AIL_DIRECTION  "AIL Direction"
#define STR_COL_DIRECTION  "COL Direction"

#define STR_MODEL_POPUP    "EDIT\0SELECT\0SEL/EDIT\0COPY\0MOVE\0DELETE"
#define STR_MODELSEL       "MODELSEL"
// STR_11_FREE after \011 max 4 chars
#define STR_11_FREE        "\011free"
#define STR_CALIBRATION    "Calibration"
// STR_MENU_TO_START after \003 max 15 chars
#define STR_MENU_TO_START  "\003[MENU] TO START"
// STR_SET_MIDPOINT after \005 max 11 chars
#define STR_SET_MIDPOINT   "\005SET MIDPOINT"
// STR_MOVE_STICKS after \003 max 15 chars
#define STR_MOVE_STICKS    "\003MOVE STICKS/POTS"
#define STR_ANA            "ANA"
#define STR_DIAG           "DIAG"
#define STR_KEYNAMES       " Left\037Right\037\003Up\037 Down\037 Exit\037 Menu"
#define STR_TRIM_M_P       "Trim- +"
// STR_OFF_PLUS_EQ indexed 3 chars each
#define STR_OFF_PLUS_EQ    "\003off += :="
// STR_CH1_4 indexed 3 chars each
#define STR_CH1_4          "\003ch1ch2ch3ch4"
#define STR_MULTIPLIER     "Multiplier"
#define STR_CAL            "Cal"
#define STR_MODE_SRC_SW    "\003mode\012% src  sw"
#define STR_RADIO_SETUP    "General"
#define STR_OWNER_NAME     "Owner Name"
#define STR_BEEPER         "Beeper"
// STR_BEEP_MODES indexed 6 chars each
#define STR_BEEP_MODES     "\006Quiet ""NoKey ""xShort""Short ""Norm  ""Long  ""xLong "
#define STR_SOUND_MODE     "Sound Mode"
// STR_SPEAKER_OPTS indexed 10 chars each
#define STR_SPEAKER_OPTS   "\012Beeper    ""PiSpkr    ""BeeprVoice""PiSpkVoice""MegaSound "
#define STR_VOLUME         "Volume"
#define STR_SPEAKER_PITCH  " Speaker Pitch"
#define STR_HAPTICSTRENGTH " Haptic Strength"
#define STR_CONTRAST       "Contrast"
#define STR_BATT_WARN      "Battery warning" 
// STR_INACT_ALARM m for minutes after \023 - single char
#define STR_INACT_ALARM    "Inactivity alarm\023m"
#define STR_THR_REVERSE    "Throttle reverse"
#define STR_MINUTE_BEEP    "Minute beep"
#define STR_BEEP_COUNTDOWN "Beep countdown"
#define STR_FLASH_ON_BEEP  "Flash on beep"
#define STR_LIGHT_SWITCH   "Light switch"
#define STR_LIGHT_INVERT   "Backlight invert"
#define STR_LIGHT_AFTER    "Light off after\023s"
#define STR_LIGHT_STICK    "Light on Stk Mv\023s"
#define STR_SPLASH_SCREEN  "Splash screen"
#define STR_SPLASH_NAME    "Splash Name"
#define STR_THR_WARNING    "Throttle Warning"
#define STR_DEAFULT_SW_PAGE "Default Sw\037CustomStkNames\037Auto Limits\037Throttle Default"
#define STR_DEAFULT_SW     "Default Sw"
#define STR_MEM_WARN       "Memory Warning"
#define STR_ALARM_WARN     "Alarm Warning"
#define STR_POTSCROLL      "PotScroll"
#define STR_STICKSCROLL    "StickScroll"
#define STR_BANDGAP        "BandGap"
#define STR_ENABLE_PPMSIM  "Enable PPMSIM"
#define STR_CROSSTRIM      "CrossTrim"
#define STR_INT_FRSKY_ALRM "Int. Frsky alarm"
#define STR_MODE           "Mode"

// SWITCHES_STR 3 chars each
#if defined(CPUM128) || defined(CPUM2561)
#define SWITCHES_STR       "\003THRRUDELEID0ID1ID2AILGEATRNL1 L2 L3 L4 L5 L6 L7 L8 L9 LA LB LC LD LE LF LG LH LI "
#else
#define SWITCHES_STR       "\003THRRUDELEID0ID1ID2AILGEATRNL1 L2 L3 L4 L5 L6 L7 L8 L9 LA LB LC "
#endif
#define SWITCH_WARN_STR	   "Switch Warning"
// CURV_STR indexed 3 chars each
#define CURV_STR           "\003---x>0x<0|x|f>0f<0|f|c1 c2 c3 c4 c5 c6 c7 c8 c9 c10c11c12c13c14c15c16"
// CSWITCH_STR indexed 7 chars each
#ifdef VERSION3
#define CSWITCH_STR        "\007----   v>val  v<val  |v|>val|v|<valAND    OR     XOR    ""v1==v2 ""v1!=v2 ""v1>v2  ""v1<v2  ""Latch  ""F-Flop TimeOffv1\140=val"
#else
#define CSWITCH_STR        "\007----   v>val  v<val  |v|>val|v|<valAND    OR     XOR    ""v1==v2 ""v1!=v2 ""v1>v2  ""v1<v2  ""v1>=v2 ""v1<=v2 TimeOffv1\140=val"
#endif

#define SWASH_TYPE_STR     "\004----""120 ""120X""140 ""90  "

#define STR_STICK_NAMES    "Rud Ele Thr Ail "

#define STR_STAT           "STAT"
#define STR_STAT2          "STAT2"
// STR_TRIM_OPTS indexed 3 chars each
#define STR_TRIM_OPTS      "\003ExpExFFneMedCrs"
#define STR_TTM            "TTm"
#define STR_FUEL           "Fuel"
#define STR_12_RPM         "\012RPM"
#define STR_LAT_EQ         "Lat=\022Hdg"
#define STR_LON_EQ         "Lon="
#define STR_ALT_MAX        "Alt=\011m   Max="
#define STR_SPD_KTS_MAX    "Spd=\011kts Max="
#define STR_11_MPH         "\011mph"

#define STR_SINK_TONES		 "Sink Tones"
#define STR_FRSKY_MOD      "Frsky Mod Done"
#define STR_TEZ_R90				 "TelemetrEZ>=r90"

// ersky9x strings
#define STR_ST_CARD_STAT   "SD CARD STAT"
#define STR_4_READY        "\004Ready"
#define STR_NOT            "NOT"
#define STR_BOOT_REASON    "BOOT REASON"
#define STR_6_WATCHDOG     "\006WATCHDOG"
#define STR_5_UNEXPECTED   "\005UNEXPECTED"
#define STR_6_SHUTDOWN     "\006SHUTDOWN"
#define STR_6_POWER_ON     "\006POWER ON"
// STR_MONTHS indexed 3 chars each
#define STR_MONTHS         "\003XxxJanFebMarAprMayJunJulAugSepOctNovDec"
#define STR_MENU_REFRESH   "[MENU] to refresh"
#define STR_DATE_TIME      "DATE-TIME"
#define STR_SEC            "Sec."
#define STR_MIN_SET        "Min.\015Set"
#define STR_HOUR_MENU_LONG "Hour\012MENU LONG"
#define STR_DATE           "Date"
#define STR_MONTH          "Month"
#define STR_YEAR_TEMP      "Year\013Temp."
#define STR_YEAR           "Year"
#define STR_BATTERY        "BATTERY"
#define STR_Battery        "Battery"
#define STR_CURRENT_MAX    "Current\016Max"
#define STR_CPU_TEMP_MAX   "CPU temp.\014C Max\024C"
#define STR_MEMORY_STAT    "MEMORY STAT"
#define STR_GENERAL        "General"
#define STR_Model          "Model"
#define STR_RADIO_SETUP2   "RADIO SETUP2"
#define STR_BRIGHTNESS     "Brightness"
#define STR_CAPACITY_ALARM "Capacity Alarm"
#define STR_BT_BAUDRATE    "Bt baudrate"
#define STR_ROTARY_DIVISOR "Rotary Divisor"
#define STR_STICK_LV_GAIN  "Stick LV Gain"
#define STR_STICK_LH_GAIN  "Stick LH Gain"
#define STR_STICK_RV_GAIN  "Stick RV Gain"
#define STR_STICK_RH_GAIN  "Stick RH Gain"

#define STR_DISPLAY					"Display"

#define STR_MAIN_POPUP			"Model Select\0Model Setup\0Last Menu\0Radio Setup\0Statistics"
#define MODEL_SETUP_OFFSET	13
#define RADIO_SETUP_OFFSET	35


