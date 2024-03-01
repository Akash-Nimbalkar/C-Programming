#include <stdio.h>
#include <math.h>
int main()
{
    int a = 3;
    int b = 8;

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

    int z;
    //a * b = z; this is illegal
    printf("The value of z is %d\n", z);
    printf("-5 when divided by 2 leaves remainder %d\n", -5 % 2);
    printf("5 when divided by -2 leaves remainder %d\n", 5 % -2);

    /*To Perform exponential operations, one must use paw function 
    with math.h library*/

    printf("The value of 4 raised to 5 is %f\n", pow(4, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 5 / 2 is %d\n", 5 / 2);
    
    return 0;
}