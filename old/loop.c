#include <stdio.h>

int main() {

//    for (int i = 0; i < 15; ++i) {
//        printf("Hello World\n");
//    }
//    int loop = 10;
//    for (int i = 0; i < loop; ++i) {
//        printf("number: %d\n", i);
//    }

//    int loop = 2;
//    for (int i = 20; i > loop; --i) {
//        printf("number: %d\n", i);
//    }

//    int i;
//    int factory = 1;
//    for (i = 1; i < 7; ++i) {
//        factory = factory * i;
//    }
//
//    printf("factorial value of 7: %d", factory);

//    int i, number;
//    int factory = 1;
//    printf("enter to value: ");
//    scanf("%d", &number);
//
//    for (i = 1; i <= number; ++i) {
//        factory = factory * i;
//    }
//
//    printf("factorial value of 7: %d", factory);

// fibonacci

//    int a,b,c,i;
//
//    a = 1;
//    b = 1;
//    printf("%d\n", a);
//    printf("%d\n", b);
//
//    for (i = 1; i <= 8; i++) {
//        c = a+b;
//        a=b;
//        b=c;
//        printf("%d\n",c);
//    }

    //trio
//    int a,b,c,d,i;
//
//    a = 1;
//    b = 1;
//    c = 1;
//
//    printf("%d\n", a);
//    printf("%d\n", b);
//    printf("%d\n", c);
//
//    for (i = 1; i <= 7; ++i) {
//        d = a+b+c;
//        a=b;
//        b=c;
//        c=d;
//        printf("%d\n", d);
//    }



//    int i;
//    i = 1;
//
//    while (i <= 15)
//    {
//        printf("Hello World\n");
//        i++;
//    }

    int i;
    i = 1;

    while (i < 20){
        if(i%2==0 && i != 14)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
