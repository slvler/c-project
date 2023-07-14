#include <stdio.h>

int main() {

//    int number;
//
//    number = 5;
//
//    if(number == 5){
//        printf("number is equal");
//    }else {
//        printf("else");
//    }

//    int number1, number2, total;
//
//    number1 = 15;
//    number2 = 25;
//    total = number1 + number2;
//    if(total > 45){
//        printf("total is greater than 45");
//    }else {
//        printf("less than 45 total");
//    }

//    int exam1, exam2, total;
//
//    printf("enter to exam one: ");
//    scanf("%d", &exam1);
//    printf("enter to exam two: ");
//    scanf("%d", &exam2);
//
//    total = (exam1 + exam2) / 2;
//
//    printf("Total: %d\n", total);
//    if(total > 85){
//        printf("your letter grade is AA");
//    }else if(total > 55 && total < 85){
//        printf("your letter grade is CC");
//    }else if(total < 55){
//        printf("grade retention");
//    }else{
//        printf("error");
//    }

//    int number;
//    printf("enter to number: ");
//    scanf("%d", &number);
//
//    if(number%2 == 0){
//        printf("the entered number is even");
//    }else{
//        printf("number entered is odd");
//    }

    int number, control;

    printf("enter to number: ");
    scanf("%d", &number);

    printf("enter to control: ");
    scanf("%d", &control);

    if(number % control == 0)
    {
        printf("number is divisible");
    }else{
        printf("number is indivisible");
    }

    return 0;
}
