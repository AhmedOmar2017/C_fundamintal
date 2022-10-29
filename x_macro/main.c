#include "x_macro.h"


int main()
{
    setBldcSpeed(123);
    setBldcStatus(true);

    printf("Motor speed = %d RPM, Status = %s \n", getBldcSpeed(), getBldcStatus()? "true": "false");
}