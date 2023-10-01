#include "stdio.h"


int main()
{
    char character[3][10];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("enter to word: ");
        scanf("%s", character[i]);
    }
    for (j = 3; j >= 0; --j) {
        printf("%s \n", character[j]);
    }
    return 0;
}
