#include "mraa.hpp"
#include <thread>
#include <chrono>

int main ()
{
    uint16_t adc_value;
    mraa::Gpio* d2;

    d2 = new mraa::Gpio(2);
    if (d2 == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    d2->dir(mraa::DIR_OUT);

    for (;;) {
	d2->write(1);
	std::this_thread::sleep_for(std::chrono::seconds(1));
	d2->write(0);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return MRAA_SUCCESS;
}

