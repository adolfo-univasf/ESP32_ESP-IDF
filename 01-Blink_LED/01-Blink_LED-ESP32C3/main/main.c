#include <stdio.h>
#include <stdbool.h>
#include <sys/unistd.h>
#include <unistd.h>
#include "driver/gpio.h"
#include "soc/gpio_num.h"

void app_main(void)
{
	gpio_reset_pin(GPIO_NUM_8);
	gpio_set_direction(GPIO_NUM_8,GPIO_MODE_OUTPUT );
	
    while (true) 
    {
        gpio_set_level(GPIO_NUM_8,1);
        printf("OFF\n");
        sleep(2);
        
        gpio_set_level(GPIO_NUM_8, 0);
        printf("ON \n");
        sleep(2);
    }
}
