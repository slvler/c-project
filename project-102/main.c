#include <stdio.h>
#include <stdlib.h>
#include "atm.h"
#include "choose.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int password;
	
	printf("******** Welcome ******** \n");
  	printf(" enter your password: ");
  	scanf("%d", &password);
  	
    if(password != 1234)
	{
	    printf("Sorry your pin is wrong, Pls try again with the card");
	}
    else
	{
      list();
    }
	return 0;
}


