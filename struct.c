#include <stdio.h>

int main() {

//    struct lists{
//        int price;
//        char author[20];
//        char name[20];
//        float point;
//    };
//
//    struct lists lts = {10,"Victor","Home",7.45};
//
//    printf("Book name: %s\n", lts.name);
//    printf("Book Author: %s\n", lts.author);
//    printf("Book price: %d\n", lts.price);
//    printf("Book point: %f\n", lts.point);

    struct student
    {
        char name[10];
        int no;
        int class;
        float average;
    };

    struct student std;

    printf("Enter to name: ");
    scanf("%s", &std.name);
    printf("Enter to no: ");
    scanf("%d", &std.no);
    printf("Enter to class: ");
    scanf("%d", &std.class);
    printf("Enter to average: ");
    scanf("%f", &std.average);

    printf("\n\n");

    printf("%s\n", std.name);
    printf("%d\n", std.no);
    printf("%d\n", std.class);
    printf("%f\n", std.average);

    return 0;
}
