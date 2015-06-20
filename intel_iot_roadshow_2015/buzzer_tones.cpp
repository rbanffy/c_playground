#include "mraa.hpp"
#include <thread>
#include <chrono>

int main ()
{
    uint16_t rotary_val;
    mraa::Aio* rotary; // Measured between 0 and 700

    rotary = new mraa::Aio(1);
    if (rotary == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }

    mraa::Gpio* buzzer;
    
    buzzer = new mraa::Gpio(4);
    if (buzzer == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    buzzer->dir(mraa::DIR_OUT);

    // Vary the frequency of the buzzer, keep the duty-cycle at 50%   
    for (;;) {
        rotary_val = rotary->read();                                                                                                                
        buzzer->write(1);
        std::this_thread::sleep_for(std::chrono::microseconds(rotary_val));
        buzzer->write(0);
        std::this_thread::sleep_for(std::chrono::microseconds(rotary_val));                                                                      
    } 

    return MRAA_SUCCESS;
}


