//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"
AnalogIn potentiometer(p15); 
DigitalOut led(LED1);

int main() {
    while (1) {
        printf("Week 1 Exercise 2");
            
    
        float potValue = potentiometer.read();
        int onTime = potValue * 2000;         
        int offTime = 2000 - onTime;            
        
        // Flicker the LED
        led = 1;                           
        wait_ms(onTime);                        
        led = 0;                           
        wait_ms(offTime);                       

        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
        wait_ms(500); 
    }
}
