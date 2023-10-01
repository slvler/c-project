#include <stdio.h>

int main() {


//    float number1, number2, total;
//    number1 = 10;
//    number2 = 20;
//    total = number1 + number2;
//
//    printf("%f", total);

//    float number1, number2, total;
//    number1 = 17;
//    number2 = 6;
//    total = number1 / number2;
//    printf("%f", total);

//    float number1, number2, number3, total;
//    number1=77;
//    number2=23;
//    number3=45;
//
//    total = (number1 + number2 + number3) / 3;
//    printf("%f", total);


//    float number1, number2, total;
//    printf("enter the number one: ");
//    scanf("%f", &number1);
//    printf("enter the number two: ");
//    scanf("%f", &number2);
//
//    total = number1 + number2;
//    printf("total: %f", total);


    float exam1, exam2, exam3, subtotal, total;

    subtotal = 100.160;

    printf("enter to exam one: ");
    scanf("%f", &exam1);

    printf("enter to exam two: ");
    scanf("%f", &exam2);

    printf("enter to exam three: ");
    scanf("%f", &exam3);

    total = exam1 * 1.9 + exam2 * 1.5 + exam3 * 1.8 + subtotal;
    printf("Total point: %f", total);


    return 0;
}
