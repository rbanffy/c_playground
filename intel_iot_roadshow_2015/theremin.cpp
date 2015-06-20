#include "mraa.hpp"
#include <thread>
#include <chrono>

int main ()
{
    uint16_t delay;
    mraa::Aio* light; // Measured between 30 and 450
    mraa::Gpio* buzzer;

    light = new mraa::Aio(0);  // Light sensor on analog input 0
    if (light == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }

    buzzer = new mraa::Gpio(4);  // Buzzer on digital out 4
    if (buzzer == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    buzzer->dir(mraa::DIR_OUT);

    // Vary the frequency of the buzzer, keep the duty-cycle at 50%   
    for (;;) {
        delay = (light->read() - 30) / 2;  // Should be between 0 and 230, more or less                                                                                                              
        buzzer->write(1);
        std::this_thread::sleep_for(std::chrono::microseconds(delay));
        buzzer->write(0);
        std::this_thread::sleep_for(std::chrono::microseconds(delay));                                                                      
    } 

    return MRAA_SUCCESS;
}


