/*
Linker script for STM32F10x
Copyright RAISONANCE 2007 (modified by Lanchon 1-Feb-2008)
You can use, copy and distribute this file freely, but without any waranty.
Configure memory sizes, end of stack and boot mode for your project here.

Modified for use with Trinamic TMCM Boot Loader by OK, 29-May-2009.
*/


/* include the common STM32F10x sub-script */
INCLUDE "cpu/STM32F103/STM32_COMMON.ld"

/* Memory Spaces Definitions */
MEMORY
{
  RAM (xrw) : ORIGIN = 0x20000000, LENGTH = 20K  /* also change _estack below */
  FLASH (rx) : ORIGIN = 0x8004000, LENGTH = 109556  /* 107K - 12 bytes */
  FLASHB1 (rx) : ORIGIN = 0x00000000, LENGTH = 0
  EXTMEMB0 (rx) : ORIGIN = 0x00000000, LENGTH = 0
  EXTMEMB1 (rx) : ORIGIN = 0x00000000, LENGTH = 0
  EXTMEMB2 (rx) : ORIGIN = 0x00000000, LENGTH = 0
  EXTMEMB3 (rx) : ORIGIN = 0x00000000, LENGTH = 0
}

/* highest address of the user mode stack */
_estack = 0x20005000;

/* include the section management sub-script */
/* (either "STM32_SEC_FLASH.ld" or "STM32_SEC_RAM.ld") */
INCLUDE "cpu/STM32F103/STM32_SEC_FLASH.ld"
