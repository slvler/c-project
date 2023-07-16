#include <stdio.h>

int main() {


    typedef int number;

    number number1;
    number1 = 22;

    number number2, number3, number4, number5;
    number2=33;
    number3=44;
    number4=55;
    printf("%d\n", number1);
    printf("%d\n %d %d", number2,number3,number4);
    number5=number1+number2+number3+number4;
    printf("\n\n");
    printf("%d", number5);

    return 0;
}
