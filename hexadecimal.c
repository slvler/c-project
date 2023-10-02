#include <stdio.h>
#include <string.h>
#include <math.h>



int main()
{
    int total, lenght, decimal_number, count, x;
    char hex;
    printf("enter to hexadecimal number: ");
    scanf("%s", &hex);

    lenght = strlen(&hex);

    for (int i = 0; i < lenght; ++i) {

        remainder = x % 10;
        decimal_number = decimal_number + remainder * pow(16, count);
        x = x / 10;
        count++;
    }
    printf("%d", lenght);
    return 0;
}

