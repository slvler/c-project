#include <stdio.h>

int main() {

    //int number[] = {1,3,4,5,6,7,8,9};
    //printf("%d", number[2]);


//    char city[] = {'i','s','t','a','n','b','u','l'};
//    printf("%s\n", city);
//
//    char province[5] = {'f','a','t','i','h'};
//    printf("%s", province);


//    int number[4];
//    number[0] = 14;
//    number[1] = 24;
//    number[2] = 34;
//
//    printf("%d", number[2]);

//    int arrays[] = {1,2,3,4,5,6,7,8};
//
//    //printf("%d", arrays[6]);
//
//    for (int i = 0; i < 8; ++i) {
//        printf("%d\n", arrays[i]);
//    }

//    int numbers[] = {12,13,14,15,17};
//    int total=0;
//    int i;
//
//    for (i = 0; i < 5; ++i) {
//        total=total+numbers[i];
//    }
//    printf("Total: %d", total);


    char province[2][15];
    for (int i = 0; i < 3; i++) {
        printf("Enter to city name:");
        scanf("%s", province[i]);
    }
    printf("enter city:\n");
    for (int j = 0; j < 3; ++j) {
        printf("%s\n", province[j]);
    }

    return 0;
}
