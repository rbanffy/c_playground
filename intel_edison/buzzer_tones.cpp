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

    for (int up = 0; up <= 1000; up++) { // How many cycles we are up
	for (int i = 0; i < 1000; i++) {
            buzzer->write(1);
            std::this_thread::sleep_for(std::chrono::microseconds(up));
            buzzer->write(0);
            std::this_thread::sleep_for(std::chrono::microseconds(1000 - up));
        }
        fprintf(stdout, "%d\n", up);
    }

    return MRAA_SUCCESS;
}


