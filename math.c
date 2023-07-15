#include <stdio.h>
#include <math.h>

int main() {
    /*
     * sqrt 144 > 12
     */
//    int value, total;
//    printf("Enter to value: ");
//    scanf("%d", &value);
//
//    total = sqrt(value);
//    printf("Total: %d", total);
//    return 0;


    /*
     * pow 3*2 = 9
     */
//    int x,y;
//    int result;
//    printf("X: ");
//    scanf("%d", &x);
//    printf("Y: ");
//    scanf("%d", &y);
//    result = pow(x,y);
//    printf("Result: %d", result);

    /*
     * ceil 7,8 > 7
     */

//    double number, total1, total2;
//    printf("Enter To number: ");
//    scanf("%lf", &number);
//    total1 = floor(number);
//    printf("Result: %.f\n", total1);
//    total2 = ceil(number);
//    printf("Result: %.f", total2);


    /*
     * fabs = -5 > 5
     */

//    double number, result;
//    printf("Enter to number: ");
//    scanf("%lf", &number);
//
//    result = fabs(number);
//    printf("Result : %.lf", result);


//    double number, result;
//    printf("Enter to number: ");
//    scanf("%lf", &number);
//
//    result = log(number);
//    printf("Result : %.7lf", result);


    /*
     * sin & cos
     */

    double degree, sin_result, cos_result;
    printf("Enter to val: ");
    scanf("%lf", &degree);
    sin_result = sin(degree);
    printf("Sin: %lf\n", sin_result);
    cos_result = cos(degree);
    printf("Con: %lf", cos_result);


    return 0;
}
