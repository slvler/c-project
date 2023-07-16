#include "display.h"
void display_init(void)
{
	printf("DISPLAY INIT\n");	
}
void display_power_on(void)
{
	printf("DISPLAY POWER ON\n");
}
void display_power_off(void)
{
	printf("DISPLAY POWER OFF\n");
}
void display_write_to_screen(int num)
{
	printf("**************\n");
	printf("Temperature %d\n", num);
	printf("**************\n");
}
