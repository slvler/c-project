#include "choose.h"

extern void bill();

void list(void)
{
	int choose;
	
	printf("1. Bill Management: \n");
	printf("2. Deposit: \n");
	printf("3. Withdraw Money: \n");
	printf("4. Transfer: \n");
	scanf("%d", &choose);
	
  switch(choose)
  {
    case 1: // BALANCE Enquiry
    printf("Your bank balance is: %f", "1.00");
     break;

    case 2:// Second option should be withdraw
    printf("Please enter amount to withdraw: ");
    break;

    case 3:// DEPOSIT
    printf("Please enter amount to deposit: ");
    break;
    default:
     printf("Thanks for Using ATM services, See you soon");
  }	
}
