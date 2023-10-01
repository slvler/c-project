#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int code, choice, price, quantity, subtotal, result, cash, change;
	char order;
	
	do
	{
	system("cls");
	printf("=====================\n");
	printf("THE FOOD RESTO MENU\n");
	printf("======================\n");
	
	printf("[1] APPETIZER\n");
	printf("[2] DESSERTS\n");
	printf("[3] DRINKS\n");
	printf("[4] SPECIAL MENU\n");
	printf("[5] MAIN DISHES\n");
	
	printf("ENTER CODE: ");
	scanf("%d", &code);
	
	
	switch(code) {
		case 1: 
			appetizervoid();
			break;
		case 2:
			desserts();
			break;
		case 3: 
			drinks();
			break;	
		case 4: 
			special_menu();
			break;
		case 5: 
			main_dishes();
			break;
	}
	
	printf("ENTER COOICE: ");
	scanf("%d", &choice);
	
	
	if(choice == 1 && code == 1)
		price = 5;
	if(choice == 2 && code == 1)
		price = 15;	
	if(choice == 3 && code == 1)
		price = 25;		
	if(choice == 1 && code == 2)
		price = 35;
	if(choice == 2 && code == 2)
		price = 45;	
	if(choice == 3 && code == 2)
		price = 45;
	if(choice == 1 && code == 3)
		price = 55;	
	if(choice == 2 && code == 3)
		price = 65;		
	if(choice == 3 && code == 3)
		price = 75;		
	if(choice == 1 && code == 4)
		price = 85;			
	if(choice == 2 && code == 4)
		price = 95;	
	if(choice == 3 && code == 4)
		price = 105;	
	if(choice == 1 && code == 5)
		price = 1155;			
	if(choice == 2 && code == 5)
		price = 125;	
	if(choice == 3 && code == 5)
		price = 135;	
	
	
	printf("ENTER QUANTITY: ");
	scanf("%d", &quantity);
	
	subtotal = price * quantity;
	printf("SUBTOTAL: %d\n", subtotal);
	
	printf("Will you continue to order? (y/n)");
	//scanf("%c", &order);	
	order = getche();
	
	result = result + subtotal;
	
	}while(order == 'Y' || order == 'y');
	
	do{
		printf("\nCash: ");
		scanf("%d", &cash);
	}while(cash < result);
		
	change = cash - result;
	printf("Change: %d", change);
	
	return 0;
}


void appetizervoid(void)
{
	printf("[1] SWEET APPETIZER 1\n");
	printf("[2] SWEET APPETIZER 2\n");
	printf("[3] SWEET APPETIZER 3\n");
}

void desserts(void)
{
	printf("[1] SWEET DESSERTS 1\n");
	printf("[2] SWEET DESSERTS 2\n");
	printf("[3] SWEET DESSERTS 3\n");
}

void drinks(void)
{
	printf("[1] FRESH DRINKS 1\n");
	printf("[2] FRESH DRINKS 2\n");
	printf("[3] FRESH DRINKS 3\n");
}

void special_menu(void)
{
	printf("[1] SPECIAL MENU 1\n");
	printf("[2] SPECIAL MENU 2\n");
	printf("[3] SPECIAL MENU 3\n");
}

void main_dishes(void)
{
	printf("[1] MAIN DISHES 1\n");
	printf("[2] MAIN DISHES 2\n");
	printf("[3] MAIN DISHES 3\n");
}






