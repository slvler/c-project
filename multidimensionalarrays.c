#include <stdio.h>

int main() {

//    int array[2][2];
//    array[0][0] = 10;
//    array[0][1] = 20;
//    array[1][0] = 30;
//    array[1][1] = 40;
//
//    printf("Value: %d\n", array[0][0]);
//    printf("Value: %d\n", array[0][1]);
//    printf("Value: %d\n", array[1][0]);
//    printf("Value: %d\n", array[1][1]);

//
//    int array[2][3] = {10,20,30,40,50,60};
//    printf("Value: %d\n", array[1][1]);


    int line,column,i,j,k,n;

    printf("Line: ");
    scanf("%d", &line);

    printf("Row: ");
    scanf("%d", &column);


    int array[line][column];

    for (i = 0; i < line; ++i) {
        for (j = 0; j < column; ++j) {
            printf("\n[%d][%d] ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    for (k = 0; k < line; ++k) {
        for (n = 0; n < column; ++n) {
            printf("%d ", array[k][n]);
        }
        printf("\n");
    }


    return 0;
}
