#include <stdio.h>
#include <string.h>

int main() {

//    char text[40];
//    printf("Enter to text: ");
//    gets(text);
//    printf("\n\n");
//    puts(text);

//    char book[30];
//    printf("Enter to val: ");
//    scanf("%s", book);
//    printf("%10s", book);

//    char book[30];
//    printf("Enter to val: ");
//    scanf("%s", book);
//    printf("%20.5s", book);
//
//    char book[30];
//    printf("Enter to val: ");
//    scanf("%s", book);
//    printf("%-20s", book);


    /*
     * strlen
     */
    //printf("Lorem ipsum: %d", strlen("test"));
//    char word[100];
//    printf("Enter to text: ");
//    scanf("%s", word);
//    printf("length: %d", strlen(word));


    /*
     * strcpy /strncpy
     */
//    char text1[30] = "hello world";
//    char text2[30] = "";
//
//    strcpy(text2,text1);
//    printf("%s", text2);

//    char text1[30] = "hello world";
//    char text2[30] = "";
//
//    strncpy(text2,text1,3);
//    printf("%s", text2);


    /*
     * strcat
     */

    char book[30], author[30], trsh[30];

    printf("Enter to text: ");
    scanf("%s%s", book,author);
    strcat(trsh, book);
    strcat(trsh," --- ");
    strcat(trsh, author);
    printf("\n\n");
    printf("%s", trsh);



    return 0;
}
