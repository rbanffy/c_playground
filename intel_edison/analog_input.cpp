#include "mraa.hpp"

int main ()
{
    uint16_t adc_value;
    mraa::Gpio* d2;

    d2 = new mraa::Gpio(2);
    if (d2 == NULL) {
        return MRAA_ERROR_UNSPECIFIED;
    }
    d2.dir(mraa.DIR_OUT);

    d2->write(1);

    return MRAA_SUCCESS;
}

