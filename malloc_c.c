#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n, i, *point, total =0;

    printf("total number: ");
    scanf("%d", &n);

    point = (int*) malloc(n * sizeof(int));

    //printf("%d \n", point);
    //printf("%d \n", n);
    //printf("%d \n", sizeof(float));
    //printf("%d \n", i);
    //printf("%d \n", total);

    if(point == NULL)
    {
        printf("Error");
        exit(0);
    }

    printf("Enter to value: \n");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", point + i);
        total += *(point + i);
    }
    printf("Total = %d", total);
    free(point);
    return 0;

}
