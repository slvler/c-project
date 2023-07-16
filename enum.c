#include <stdio.h>

int main() {

    enum city{
        istanbul,
        ankara,
        izmir,
        bursa,
        adana
    };

    enum city variable;
    variable = bursa;
    printf("%d", variable);
    return 0;
}
