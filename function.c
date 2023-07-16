#include <stdio.h>



//void list()
//{
//    printf("Hello\n");
//    printf("World\n");
//    printf("Lorem\n");
//    printf("Ipsum\n");
//    printf("Hello, World!\n");
//}
//
//int total(int number1, int number2)
//{
//    int number3;
//    number3=number1+number2;
//    return number3;
//}
//
//int process(int number1, int number2)
//{
//    int number3;
//    number3=number1+number2;
//    return number3;
//}
//
//int cube(int number)
//{
//    return number*number*number;
//}
//
//void rectangle(int shrt, int lng)
//{
//    int i,j;
//    for (i = 0; i < lng; i++) {
//        for (j = 0; j < shrt; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}


int collection(int number1, int number2)
{
    return number1+number2;
}
int interest(int number1, int number2)
{
    return number1-number2;
}
int impact(int number1, int number2)
{
    return number1*number2;
}
int cube_calculation(int number1)
{
    return number1*number1*number1;
}


int main() {

    //list();
//    total(1,2);
//    printf("Result: %d", total(3,4));

//    int number1,number2;
//
//    printf("Enter to number1: ");
//    scanf("%d", &number1);
//
//    printf("Enter to number2: ");
//    scanf("%d", &number2);
//
//    printf("Total: %d", process(number1,number2));

//    int number1;
//    printf("Enter to value: ");
//    scanf("%d", &number1);
//
//    printf("Cube: %d", cube(number1));

    //rectangle(4,10);


    int choose, number1, number2;

    printf("***********\n");
    printf("*****Menu*****");
    printf("\n\n");
    printf("please choose\n");
    printf("1. addition\n");
    printf("2. extraction process\n");
    printf("3. multiplication\n");
    printf("4. cube calculation\n");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("Enter to number1: ");
            scanf("%d", &number1);
            printf("Enter to number2: ");
            scanf("%d", &number2);
            printf("%d", collection(number1,number2));
            break;
        case 2:
            printf("Enter to number1: ");
            scanf("%d", &number1);
            printf("Enter to number2: ");
            scanf("%d", &number2);
            printf("%d", interest(number1,number2));
            break;
        case 3:
            printf("Enter to number1: ");
            scanf("%d", &number1);
            printf("Enter to number2: ");
            scanf("%d", &number2);
            printf("%d", impact(number1,number2));
            break;
        case 4:
            printf("Enter to number1: ");
            scanf("%d", &number1);
            printf("%d", cube_calculation(number1));
            break;
    }



    return 0;
}
