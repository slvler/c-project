#include "sensor.h"

int temp_val[10] = {22,33,26,14,25,16,37,18,19};

void sensor_init(void)
{
	printf("SENSOR INIT\n");
}

int sensor_get_temp_value(void)
{
	static int counter = 0;
	int temp = 0;
	
	temp = temp_val[counter];
	counter++;
	
	if(10 == counter)
	{
		counter = 0;
	}
	
	return temp;
	
}
