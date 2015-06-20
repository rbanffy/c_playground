#include "mraa.hpp"
#include <thread>
#include <chrono>

int main ()
{
    uint16_t light_value;

    mraa::Aio* light;
    mraa::Gpio* buzzer;
    mraa::Gpio* led;

    buzzer = new mraa::Gpio(4);
    if (buzzer == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    buzzer->dir(mraa::DIR_OUT);

    led = new mraa::Gpio(2);
    if (led == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    led->dir(mraa::DIR_OUT);

    light = new mraa::Aio(0);
    if (light == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }

    for (;;) {
        light_value = light->read();

	buzzer->write(1);
	led->write(1);
	std::this_thread::sleep_for(std::chrono::milliseconds(light_value));
	buzzer->write(0);
	led->write(0);
        std::this_thread::sleep_for(std::chrono::milliseconds(light_value));
    }

    return MRAA_SUCCESS;
}


