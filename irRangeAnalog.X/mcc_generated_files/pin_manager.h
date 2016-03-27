/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1718
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS               TRISA0
#define channel_AN0_LAT                LATA0
#define channel_AN0_PORT               RA0
#define channel_AN0_WPU                WPUA0
#define channel_AN0_ANS                ANSA0
#define channel_AN0_SetHigh()    do { LATA0 = 1; } while(0)
#define channel_AN0_SetLow()   do { LATA0 = 0; } while(0)
#define channel_AN0_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define channel_AN0_GetValue()         RA0
#define channel_AN0_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define channel_AN0_SetPullup()    do { WPUA0 = 1; } while(0)
#define channel_AN0_ResetPullup()   do { WPUA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set channel_AN1 aliases
#define channel_AN1_TRIS               TRISA1
#define channel_AN1_LAT                LATA1
#define channel_AN1_PORT               RA1
#define channel_AN1_WPU                WPUA1
#define channel_AN1_ANS                ANSA1
#define channel_AN1_SetHigh()    do { LATA1 = 1; } while(0)
#define channel_AN1_SetLow()   do { LATA1 = 0; } while(0)
#define channel_AN1_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define channel_AN1_GetValue()         RA1
#define channel_AN1_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define channel_AN1_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define channel_AN1_SetPullup()    do { WPUA1 = 1; } while(0)
#define channel_AN1_ResetPullup()   do { WPUA1 = 0; } while(0)
#define channel_AN1_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define channel_AN1_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set channel_AN2 aliases
#define channel_AN2_TRIS               TRISA2
#define channel_AN2_LAT                LATA2
#define channel_AN2_PORT               RA2
#define channel_AN2_WPU                WPUA2
#define channel_AN2_ANS                ANSA2
#define channel_AN2_SetHigh()    do { LATA2 = 1; } while(0)
#define channel_AN2_SetLow()   do { LATA2 = 0; } while(0)
#define channel_AN2_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define channel_AN2_GetValue()         RA2
#define channel_AN2_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define channel_AN2_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define channel_AN2_SetPullup()    do { WPUA2 = 1; } while(0)
#define channel_AN2_ResetPullup()   do { WPUA2 = 0; } while(0)
#define channel_AN2_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define channel_AN2_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set channel_AN3 aliases
#define channel_AN3_TRIS               TRISA3
#define channel_AN3_LAT                LATA3
#define channel_AN3_PORT               RA3
#define channel_AN3_WPU                WPUA3
#define channel_AN3_ANS                ANSA3
#define channel_AN3_SetHigh()    do { LATA3 = 1; } while(0)
#define channel_AN3_SetLow()   do { LATA3 = 0; } while(0)
#define channel_AN3_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define channel_AN3_GetValue()         RA3
#define channel_AN3_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define channel_AN3_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define channel_AN3_SetPullup()    do { WPUA3 = 1; } while(0)
#define channel_AN3_ResetPullup()   do { WPUA3 = 0; } while(0)
#define channel_AN3_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define channel_AN3_SetDigitalMode()   do { ANSA3 = 0; } while(0)
// get/set channel_AN4 aliases
#define channel_AN4_TRIS               TRISA5
#define channel_AN4_LAT                LATA5
#define channel_AN4_PORT               RA5
#define channel_AN4_WPU                WPUA5
#define channel_AN4_ANS                ANSA5
#define channel_AN4_SetHigh()    do { LATA5 = 1; } while(0)
#define channel_AN4_SetLow()   do { LATA5 = 0; } while(0)
#define channel_AN4_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define channel_AN4_GetValue()         RA5
#define channel_AN4_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define channel_AN4_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define channel_AN4_SetPullup()    do { WPUA5 = 1; } while(0)
#define channel_AN4_ResetPullup()   do { WPUA5 = 0; } while(0)
#define channel_AN4_SetAnalogMode()   do { ANSA5 = 1; } while(0)
#define channel_AN4_SetDigitalMode()   do { ANSA5 = 0; } while(0)
// get/set SCL aliases
#define SCL_TRIS               TRISC0
#define SCL_LAT                LATC0
#define SCL_PORT               RC0
#define SCL_WPU                WPUC0
#define SCL_SetHigh()    do { LATC0 = 1; } while(0)
#define SCL_SetLow()   do { LATC0 = 0; } while(0)
#define SCL_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define SCL_GetValue()         RC0
#define SCL_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define SCL_SetPullup()    do { WPUC0 = 1; } while(0)
#define SCL_ResetPullup()   do { WPUC0 = 0; } while(0)
// get/set SDA aliases
#define SDA_TRIS               TRISC1
#define SDA_LAT                LATC1
#define SDA_PORT               RC1
#define SDA_WPU                WPUC1
#define SDA_SetHigh()    do { LATC1 = 1; } while(0)
#define SDA_SetLow()   do { LATC1 = 0; } while(0)
#define SDA_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define SDA_GetValue()         RC1
#define SDA_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define SDA_SetPullup()    do { WPUC1 = 1; } while(0)
#define SDA_ResetPullup()   do { WPUC1 = 0; } while(0)
// get/set channel_AN14 aliases
#define channel_AN14_TRIS               TRISC2
#define channel_AN14_LAT                LATC2
#define channel_AN14_PORT               RC2
#define channel_AN14_WPU                WPUC2
#define channel_AN14_ANS                ANSC2
#define channel_AN14_SetHigh()    do { LATC2 = 1; } while(0)
#define channel_AN14_SetLow()   do { LATC2 = 0; } while(0)
#define channel_AN14_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define channel_AN14_GetValue()         RC2
#define channel_AN14_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define channel_AN14_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define channel_AN14_SetPullup()    do { WPUC2 = 1; } while(0)
#define channel_AN14_ResetPullup()   do { WPUC2 = 0; } while(0)
#define channel_AN14_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define channel_AN14_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set channel_AN15 aliases
#define channel_AN15_TRIS               TRISC3
#define channel_AN15_LAT                LATC3
#define channel_AN15_PORT               RC3
#define channel_AN15_WPU                WPUC3
#define channel_AN15_ANS                ANSC3
#define channel_AN15_SetHigh()    do { LATC3 = 1; } while(0)
#define channel_AN15_SetLow()   do { LATC3 = 0; } while(0)
#define channel_AN15_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define channel_AN15_GetValue()         RC3
#define channel_AN15_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define channel_AN15_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define channel_AN15_SetPullup()    do { WPUC3 = 1; } while(0)
#define channel_AN15_ResetPullup()   do { WPUC3 = 0; } while(0)
#define channel_AN15_SetAnalogMode()   do { ANSC3 = 1; } while(0)
#define channel_AN15_SetDigitalMode()   do { ANSC3 = 0; } while(0)
// get/set channel_AN16 aliases
#define channel_AN16_TRIS               TRISC4
#define channel_AN16_LAT                LATC4
#define channel_AN16_PORT               RC4
#define channel_AN16_WPU                WPUC4
#define channel_AN16_ANS                ANSC4
#define channel_AN16_SetHigh()    do { LATC4 = 1; } while(0)
#define channel_AN16_SetLow()   do { LATC4 = 0; } while(0)
#define channel_AN16_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define channel_AN16_GetValue()         RC4
#define channel_AN16_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define channel_AN16_SetDigitalOutput()   do { TRISC4 = 0; } while(0)

#define channel_AN16_SetPullup()    do { WPUC4 = 1; } while(0)
#define channel_AN16_ResetPullup()   do { WPUC4 = 0; } while(0)
#define channel_AN16_SetAnalogMode()   do { ANSC4 = 1; } while(0)
#define channel_AN16_SetDigitalMode()   do { ANSC4 = 0; } while(0)
// get/set channel_AN17 aliases
#define channel_AN17_TRIS               TRISC5
#define channel_AN17_LAT                LATC5
#define channel_AN17_PORT               RC5
#define channel_AN17_WPU                WPUC5
#define channel_AN17_ANS                ANSC5
#define channel_AN17_SetHigh()    do { LATC5 = 1; } while(0)
#define channel_AN17_SetLow()   do { LATC5 = 0; } while(0)
#define channel_AN17_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define channel_AN17_GetValue()         RC5
#define channel_AN17_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define channel_AN17_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define channel_AN17_SetPullup()    do { WPUC5 = 1; } while(0)
#define channel_AN17_ResetPullup()   do { WPUC5 = 0; } while(0)
#define channel_AN17_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define channel_AN17_SetDigitalMode()   do { ANSC5 = 0; } while(0)
// get/set channel_AN18 aliases
#define channel_AN18_TRIS               TRISC6
#define channel_AN18_LAT                LATC6
#define channel_AN18_PORT               RC6
#define channel_AN18_WPU                WPUC6
#define channel_AN18_ANS                ANSC6
#define channel_AN18_SetHigh()    do { LATC6 = 1; } while(0)
#define channel_AN18_SetLow()   do { LATC6 = 0; } while(0)
#define channel_AN18_Toggle()   do { LATC6 = ~LATC6; } while(0)
#define channel_AN18_GetValue()         RC6
#define channel_AN18_SetDigitalInput()    do { TRISC6 = 1; } while(0)
#define channel_AN18_SetDigitalOutput()   do { TRISC6 = 0; } while(0)

#define channel_AN18_SetPullup()    do { WPUC6 = 1; } while(0)
#define channel_AN18_ResetPullup()   do { WPUC6 = 0; } while(0)
#define channel_AN18_SetAnalogMode()   do { ANSC6 = 1; } while(0)
#define channel_AN18_SetDigitalMode()   do { ANSC6 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */