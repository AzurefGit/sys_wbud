/*
 * File:   newmainXC161.c
 * Author: local
 *
 * Created on April 15, 2026, 10:29 AM
 */


#include "xc.h"
#include "libpic30.h"  //delay

int main(void) {
//    unsigned portVal = 0x0001;    //ustalenie pocz?tkowego stanu diody
//    char current6 = 0; int prev6 = 0; //zmienne do detekcji przycisku RD6 (po lewej)
//    
//    int value = 1;  //stan dzialania programu - do switcha
//     
//    TRISA = 0x0000; // port A na wyj?cie
//    TRISD = 0xFFFF; // port D na wyj?cie
//    
//    while(1){
//        switch(value){
//            
//            case 1: //implementacji warto?ci portVal
//                LATA = portVal;
//                portVal++;
//                if(portVal == 0xFF){ //je?eli przekroczy 8-bit
//                    portVal = 0; //reset portVal
//                }break;
//            case 2:
//                LATA = portVal;
//                portVal--;
//                if(portVal == 0xFF){
//                    portVal = 0;
//                }break;      
//        }
//        
//        //obsluga przycisku RD6
//        prev6 = PORTDbits.RD6;    //odczytywanie poprzedniego stanu RD6
//        __delay32(1000000);
//        current6 = PORTDbits.RD6; //odczytywanie aktualnego stanu RD6
//        if(prev6 == 1 && current6 == 0){
//            value++;
//            if(value > 2){
//                value = 1;
//            }
//            portVal = 1; //reset do jednej diody
//        }
//    }
    
    unsigned portVal = 0x0001;
    char current6 = 0; int prev6 = 0; char current7 = 0; int prev7 = 0; 
    
    int value = 1;
    
    TRISA = 0x0000;
    TRISD = 0xFFFF;
    
    while(1){
        switch(value){
            case 1:
                LATA = portVal;
                break;
                
            case 2:
                LATA = portVal+1;
                break;
                
            case 3:
                LATA = portVal+3;
                break;
            
            default:
                LATA = value;
        }
        
        prev6 = PORTDbits.RD6;
        prev7 = PORTDbits.RD7;
        __delay32(1000000);
        current6 = PORTDbits.RD6;
        current7 = PORTDbits.RD7;
            
        if(current6 - prev6 == 1){
            value--;
            portVal = 1;
            if(value <= 0){
                value = 3;
            }
        }
        
        if(current7 - prev7 == 1){
            value++;
            portVal = 1;
            if(value >= 4){
                value = 1;
            }
        }
    }
    
    return 0;
}
