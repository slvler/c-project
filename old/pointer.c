#include <stdio.h>

int main() {

//    int number=30;
//    int number2=55;
//    double number3=7.25;
//    char text='h';
//
//    printf("%d\n", number);
//    printf("%d\n", number2);
//    printf("%f\n", number3);
//    printf("%c\n", text);
//
//    printf("\n\n");
//    printf("pointer\n");
//
//    printf("%x\n", &number);
//    printf("%x\n", &number2);
//    printf("%x\n", &number3);
//    printf("%x\n", &text);

//    int number=30;
//    int *nmbr=&number;
//
//    printf("Value: %d\n", number);
//
//    printf("Pointer: %x\n", nmbr);
//
//    char text='ccp';
//    char *t=&text;
//
//    printf("Value: %c\n", text);
//    printf("Pointer: %x", t);

    char text='cpp';
    char *txt=&text;

    printf("Address: %x\n", txt);

    txt++;
    printf("Address2: %x\n", txt);

    txt--;
    printf("Address3: %x\n", txt);

    txt= txt+5;
    printf("Address4: %x", txt);


    return 0;
}
