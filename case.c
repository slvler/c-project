#include <stdio.h>

int main() {

//    int number;
//    printf("enter to number: ");
//    scanf("%d", &number);
//
//    switch (number) {
//        case 1:
//            printf("111");
//            break;
//        case 2:
//            printf("222");
//            break;
//        case 3:
//            printf("333");
//            break;
//    }

//    char week;
//    printf("what day of the week: ");
//    scanf("%s", &week);
//
//
//    switch (week) {
//        case 'monday':
//            printf("1");
//            break;
//        case 'tuesday':
//            printf("2");
//            break;
//        case 'wed':
//            printf("3");
//            break;
//        case 'thu':
//            printf("4");
//            break;
//        case 'friday':
//            printf("5");
//            break;
//        case 'saturday':
//            printf("6");
//            break;
//        case 'sun':
//            printf("7");
//            break;
//    }


    int number1, number2, half_diameter, short_edge, long_edge, total, choice;

    number1 = 10;
    number2 = 20;
    half_diameter = 5;
    half_diameter = 5;
    short_edge = 10;
    long_edge = 9;

    printf("Math\n");
    printf("***************\n\n");


    printf("1-cube calculation\n");
    printf("2-calculating area and perimeter in a square\n");
    printf("3-calculating area and perimeter of a circle\n");
    printf("4-calculating area and perimeter of a rectangle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Total: %d", (number1*number1*number1));
            break;
        case 2:
            total = number1 * number1;
            printf("Total: %d\n", total);
            printf("Total: %d", (number1*4));
        case 3:
            printf("Total: %d\n", (2*3*half_diameter));
            printf("Total: %d\n", (3*3)*half_diameter );
        case 4:
            printf("Total: %d\n", 2*(short_edge+long_edge));
            printf("Total: %d\n", short_edge*long_edge );
    }

    return 0;
}
