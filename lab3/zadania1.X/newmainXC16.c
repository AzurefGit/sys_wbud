/*
 * File:   newmainXC16.c
 * Author: local
 *
 * Created on April 1, 2026, 10:25 AM
 */

// PIC24FJ128GA010 Configuration Bit Settings

// 'C' source line config statements

// CONFIG2
#pragma config POSCMOD = XT             // Primary Oscillator Select (XT Oscillator mode selected)
#pragma config OSCIOFNC = ON            // Primary Oscillator Output Function (OSC2/CLKO/RC15 functions as port I/O (RC15))
#pragma config FCKSM = CSDCMD           // Clock Switching and Monitor (Clock switching and Fail-Safe Clock Monitor are disabled)
#pragma config FNOSC = PRI              // Oscillator Select (Primary Oscillator (XT, HS, EC))
#pragma config IESO = ON                // Internal External Switch Over Mode (IESO mode (Two-Speed Start-up) enabled)

// CONFIG1
#pragma config WDTPS = PS32768          // Watchdog Timer Postscaler (1:32,768)
#pragma config FWPSA = PR128            // WDT Prescaler (Prescaler ratio of 1:128)
#pragma config WINDIS = ON              // Watchdog Timer Window (Standard Watchdog Timer enabled,(Windowed-mode is disabled))
#pragma config FWDTEN = ON              // Watchdog Timer Enable (Watchdog Timer is enabled)
#pragma config ICS = PGx2               // Comm Channel Select (Emulator/debugger uses EMUC2/EMUD2)
#pragma config GWRP = OFF               // General Code Segment Write Protect (Writes to program memory are allowed)
#pragma config GCP = OFF                // General Code Segment Code Protect (Code protection is disabled)
#pragma config JTAGEN = OFF             // JTAG Port Enable (JTAG port is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include "xc.h"
#include "libpic30.h"

int main(void) {
    unsigned char portVal; //deklaracja wszystkich  - w tym przypadku diod
    AD1PCFG = 0xFFFF; // ustawienie portu a na tryb cyfrowy
    TRISA = 0x0000; // ustawenie portu a na wyj?cie
//    
//    while(1){
//        portVal = 0x55; //diody - 1,3,5,7
//        LATA = portVal;
//        
//        __delay32(1000000);
//        
//        portVal = 0xAA;
//        LATA = portVal;
//        
//        __delay32(1000000); 
//    }
//    
    
    //Zad1
//    int i = 0;
//    while(1){
//        portVal = i;
//        LATA = portVal;
//        i++;
//        __delay32(1000000); 
//    }
    
    //Zad2
//    int i = 255;
//    while(1){
//        portVal = i;
//        LATA = portVal;
//        i--;
//        __delay32(1000000); 
//    }
    //Zad3
    
    return -1;
}
