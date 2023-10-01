#include <stdio.h>
#include <stdlib.h>
#include "motor.h"
#include "sensor.h"
#include "display.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void delay(void);

int main(int argc, char *argv[]) {
	
	int temp = 0;
	
	motor_init();
	display_init();
	sensor_init();
	display_power_on();
	
	while(1)
	{
		temp = sensor_get_temp_value();
		display_write_to_screen(temp);
		
		if(temp > 25)
		{
			motor_on();
		}
		else 
		{
			motor_off();	
		}
		delay();
	}
	
	return 0;
}


void delay()
{
	int t = 0;
	for(t = 0; t < 999999999; t++)
	{}
}

