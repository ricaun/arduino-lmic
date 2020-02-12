// project-specific definitions
//#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_au915 1
//#define CFG_as923 1
// #define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP	/* for as923-JP */
//#define CFG_kr920 1
//#define CFG_in866 1
//#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS

#define CFG_au915 1

#if (defined(ARDUINO_ARCH_STM32) && defined(STM32L0xx))
#define CFG_sx1272_radio 1
#else
#define CFG_sx1276_radio 1
#endif
