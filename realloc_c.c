#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *point, i, n1, n2;

    printf("total number: ");
    scanf("%d", &n1);

    point = (int*) malloc(n1 * sizeof(int));

    printf("memory addresses: \n");
    for (int i = 0; i < n1; ++i) {
        printf("%pc\n", point + i);
    }

    printf("\n New address: ");
    scanf("%d", &n2);

    point = realloc(point, n2 * sizeof(int));

    printf("new address: \n");
    for (int i = 0; i < n2; ++i) {
        printf("%pc\n", point + i);
    }


    free(point);
    return 0;

}
