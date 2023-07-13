#include <stdio.h>

int main() {

    char name[10],age[2],city[13],job[10],book[15];

    printf("What your name ? ");
    scanf("%s",name);

    printf("How old are you ? ");
    scanf("%s",age);

    printf("Where Are you from? ");
    scanf("%s",city);

    printf("what is your job ? ");
    scanf("%s",job);

    printf("what is your favorite book ? ");
    scanf("%s",book);


    printf("\n\n");
    printf("Your name is: %s\n", name);
    printf("Your age is : %s\n", age);
    printf("Your city is : %s\n", city);
    printf("Your job is : %s\n", job);
    printf("Your favorite book is : %s\n", book);

    return 0;
}
