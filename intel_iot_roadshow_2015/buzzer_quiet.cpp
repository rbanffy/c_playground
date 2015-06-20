#include "mraa.hpp"
#include <thread>
#include <chrono>

int main ()
{
    mraa::Gpio* buzzer;

    buzzer = new mraa::Gpio(4);
    if (buzzer == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    buzzer->dir(mraa::DIR_OUT);

    buzzer->write(0);

    return MRAA_SUCCESS;
}


