/*
 * TMCL-Defines.h
 *
 *  Created on: 01.04.2019
 *      Author: OK / ED
 */

#ifndef TMCL_DEFINES_H
#define TMCL_DEFINES_H

	#define TCS_IDLE  			0
	#define TCS_CAN7  			1
	#define TCS_CAN8  			2
	#define TCS_UART  			3
	#define TCS_UART_ERROR 		4
	#define TCS_UART_II 		5
	#define TCS_UART_II_ERROR 	6
	#define TCS_USB   			7
	#define TCS_USB_ERROR 		8
	#define TCS_MEM   			9

	// TMCL commands
	#define TMCL_ROR 						1
	#define TMCL_ROL 						2
	#define TMCL_MST 						3
	#define TMCL_SAP 						5
	#define TMCL_GAP 						6
	#define TMCL_STAP 						7
	#define TMCL_RSAP 						8
	#define TMCL_SGP 						9
	#define TMCL_GGP 						10
	#define TMCL_STGP 						11
	#define TMCL_RSGP 						12
	#define TMCL_SIO						14
	#define TMCL_GIO 						15
	#define TMCL_GCO 						31
	#define TMCL_GetVersion 				136
	#define TMCL_FactoryDefault 			137
	#define TMCL_writeRegisterChannel_1		146
	#define TMCL_writeRegisterChannel_2		147
	#define TMCL_readRegisterChannel_1		148
	#define TMCL_readRegisterChannel_2		149
	#define TMCL_Boot 						242
	#define TMCL_SoftwareReset 				255

	// status codes
	#define REPLY_OK 						100
	#define REPLY_CMD_LOADED 				101
	#define REPLY_CHKERR 					1
	#define REPLY_INVALID_CMD 				2
	#define REPLY_WRONG_TYPE 				3
	#define REPLY_INVALID_VALUE 			4
	#define REPLY_EEPROM_LOCKED 			5
	#define REPLY_CMD_NOT_AVAILABLE 		6
	#define REPLY_CMD_LOAD_ERROR 			7
	#define REPLY_WRITE_PROTECTED 			8
	#define REPLY_MAX_EXCEEDED 				9
	#define REPLY_DOWNLOAD_NOT_POSSIBLE 	10
	#define REPLY_DELAYED 					128
	#define REPLY_ACTIVE_COMM 				129

	// reply format
	#define RF_STANDARD 	0
	#define RF_SPECIAL 		1
	#define RF_NO_REPLY 	2

	// TMCL request command
	typedef struct
	{
		uint8_t Opcode;
		uint8_t Type;
		uint8_t Motor;
		union
		{
			int32_t Int32;
			uint8_t Byte[4];
		} Value;
	} TTMCLCommand;

	// TMCL reply command
	typedef struct
	{
		uint8_t Status;
		uint8_t Opcode;
		union
		{
			int32_t Int32;
			uint8_t Byte[4];
		} Value;
	} TTMCLReply;

#endif /* TMCL_DEFINES_H */
