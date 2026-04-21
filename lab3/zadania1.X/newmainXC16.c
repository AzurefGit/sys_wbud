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
#include "libpic30.h"  //delay

unsigned int decimalToGray(unsigned int n) {
    return n ^ (n >> 1);
}

int mainx(void) {
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
//    int i = 0;
//    while (1) {
//        LATA = decimalToGray(i);
//        i++;
//        if (i > 255){
//            i = 0;
//            __delay32(1000000); 
//        }
//    }
    
    //Zad4
//    int i = 255;
//    while (1) {
//        LATA = decimalToGray(i);
//        i--;
//        if (i < 0){
//            i = 255;
//        }
//        __delay32(1000000);
//    }
    
    //Zad5
//    int dziesiatki = 0;
//    int jednosci   = 0;
//    while (1) {
//        // Z?o?enie bajtu: górne 4 bity = dziesi?tki, dolne 4 bity = jedno?ci
//        unsigned char val = ((dziesiatki << 4) | jednosci);
//        LATA = val;
//        __delay32(1000000);
// 
//        jednosci++;
//        if (jednosci > 9) {
//            jednosci = 0;
//            dziesiatki++;
//            if (dziesiatki > 9) {
//                dziesiatki = 0;
//            }
//        }
//    }
    
    //Zad6
//    int dziesiatki = 9;
//    int jednosci   = 9;
//    while (1) {
//        unsigned char val = (unsigned char)((dziesiatki << 4) | jednosci);
//        LATA = val;
//        __delay32(1000000);
// 
//        jednosci--;
//        if (jednosci < 0) {
//            jednosci = 9;
//            dziesiatki--;
//            if (dziesiatki < 0) {
//                dziesiatki = 9;
//            }
//        }
//    }
    
    //Zad7
//    const unsigned char snake[] = {
//        0xE0, // 1110 0000
//        0x70, // 0111 0000
//        0x38, // 0011 1000
//        0x1C, // 0001 1100
//        0x0E, // 0000 1110
//        0x07, // 0000 0111
//        0x0E, // 0000 1110
//        0x1C, // 0001 1100
//        0x38, // 0011 1000
//        0x70  // 0111 0000
//    };
//    const int snakeLen = 10;
//    int idx = 0;
// 
//    while (1) {
//        LATA = snake[idx];
//        idx++;
//        if (idx >= snakeLen) idx = 0;
//        __delay32(1000000);
//    }
    
    //zad8
//      const unsigned char queue[] = {
//        /* Faza nape?niania ? co krok zapala si? kolejny bit od prawej */
//        0x01, // 0000 0001
//        0x03, // 0000 0011
//        0x07, // 0000 0111
//        0x0F, // 0000 1111
//        0x1F, // 0001 1111
//        0x3F, // 0011 1111
//        0x7F, // 0111 1111
//        0xFF, // 1111 1111
//        /* Faza opró?niania ? co krok ga?nie kolejny bit od prawej */
//        0xFE, // 1111 1110
//        0xFC, // 1111 1100
//        0xF8, // 1111 1000
//        0xF0, // 1111 0000
//        0xE0, // 1110 0000
//        0xC0, // 1100 0000
//        0x80, // 1000 0000
//        0x00  // 0000 0000
//    };
//    const int queueLen = 16;
//    int idx = 0;
// 
//    while (1) {
//        LATA = queue[idx];
//        idx++;
//        if (idx >= queueLen) idx = 0;
//        __delay32(1000000);
//    }
    
    //zad9
    unsigned char lfsr = 0x01; // Stan pocz?tkowy (dowolny niezerowy)
    unsigned char mask = 0x33; // Maska tapsów: bity 0,1,4,5
 
    while (1) {
        // Wy?wietlamy aktualny stan na 6 diodach (bity [5:0] ? LATA[5:0])
        LATA = lfsr & 0x3F;
        __delay32(1000000);
 
        // Obliczamy nowy bit jako XOR tapsowanych bitów
        unsigned char tapped = lfsr & mask;
        // Parzyste XOR wszystkich bitów w 'tapped'
        unsigned char newbit = 0;
        unsigned char tmp = tapped;
        while (tmp) {
            newbit ^= (tmp & 1);
            tmp >>= 1;
        }
 
        // Przesuni?cie rejestru w lewo + wstawienie nowego bitu na pozycj? 0
        lfsr = ((lfsr << 1) | newbit) & 0x3F;
 
        // Zabezpieczenie przed stanem zerowym (lock-up)
        if (lfsr == 0x00){
            lfsr = 0x01;
        }
    }
    return -1;
}
