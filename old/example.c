#include <stdio.h>

int main() {

//    int i,j;
//
//    for (i = 1; i <= 5; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    int i,j,k,l;
//
//    for (i = 1; i <= 5; i++) {
//        for (j = 1; j<=i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (k=1; k<=5; k++) {
//        for (l=5; l >= k; l-- ) {
//            printf("*");
//        }
//        printf("\n");
//    }

//    int counter=0;
//    int i;
//    int a,b,c;
//
//    for (i = 100; i <= 999; i++) {
//        a=i/100;
//        b=(i/10)%10;
//        c=i%10;
//        if(a!=b && a!=c && b!=c){
//            counter++;
//        }
//    }
//    printf("result: %d", counter);

//    int number, i;
//    printf("number: ");
//    scanf("%d", &number);
//    for (i = 1; i <= number; i++) {
//
//        if(number%i==0)
//        {
//            printf("%d\n",i);
//        }
//    }

//    int number = 1;
//    int i;
//    for (i = 1; i <=24; i++){
//        number=number*2;
//    }
//    printf("%d", number);

//    int i;
//    int total =0;
//    int number;
//
//    for (i = 0; i <= 4; i++) {
//        printf("%d. number: ", i);
//        scanf("%d", &number);
//        total= total+number;
//    }
//    printf("Total: %d", total);


//    int number = 9;
//    int total=0;
//    while (number != 0)
//    {
//        printf("Number: ");
//        scanf("%d", &number);
//        total = total+number;
//    }
//    printf("%d", total);

//    int hour;
//
//    printf("how many hours do we have left ");
//    scanf("%d", &hour);
//
//    if(hour > 0 && hour <= 4)
//    {
//        printf("10");
//    }else if(hour >= 5 && hour <= 8)
//    {
//        printf("20");
//    }else if(hour >=9 && hour <= 12)
//    {
//        printf("30");
//    }else if(hour >=13)
//    {
//        printf("40");
//    }

//    int i,j;
//    int height;
//    printf("Height: ");
//    scanf("%d", &height);
//
//    for (i = 1; i <= height; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }

//    int number, total = 0;
//    for (number = 1; number <= 81; number+=4) {
//        total = total + number;
//    }
//    printf("Total: %d", total);


//    int score[10]={2,1,2,2,2,1,1,2,1,0};
//    int i, point=0;
//
//    for (i = 0; i < 10; i++) {
//        if(score[i] == 2)
//        {
//            point += 3;
//        }
//        if(score[0] == 0)
//        {
//            point +=1;
//        }
//    }
//
//    if(point >= 12)
//    {
//        printf("Point: Won! %d", point);
//    }else {
//        printf("Point: Fall %d", point);
//    }


//    int regular, hand, regular_total, hand_total, total;
//
//    printf("hand luggage: ");
//    scanf("%d", &hand);
//
//    printf("regular luggage: ");
//    scanf("%d", &regular);
//
//    if(regular<15)
//    {
//        regular_total=0;
//    }else{
//        regular_total=(regular-15)*5;
//    }
//
//    if(hand<15)
//    {
//        hand_total=0;
//    }else{
//        hand_total=(hand-8)*4;
//    }
//    total = regular_total + hand_total;
//    printf("Extra %d", total);


//    int number1,number2,big,small,i,total=0;
//
//    refresh:
//    printf("One number: ");
//    scanf("%d", &number1);
//
//    printf("Two number: ");
//    scanf("%d", &number2);
//
//    if(number1 == number2)
//    {
//        goto refresh;
//    }else {
//        if(number1 > number2)
//        {
//            big = number1;
//            small = number2;
//        }else{
//            small = number1;
//            big = number2;
//        }
//    }
//
//    for (i = small; i <= big; i++) {
//        total = total + i;
//    }
//    printf("Total: %d", total);


//    int summer, winter, spring, autumn, total;
//
//    winter = 320;
//    spring = winter/ 4;
//    summer = spring * 8;
//    autumn = summer / 10;
//    total = winter+ spring + autumn + summer;
//
//    printf("Total: %d", total);

//    int number1,number2,number3,total,number;
//
//    printf("Number: ");
//    scanf("%d", &number);
//
//    number1= number % 10;
//    number2= number / 100;
//    number3= (number / 10)%10;
//
//    total = number1 + number2 + number3;
//    printf("Total : %d", total);


    return 0;
}
