#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div, remainder;

    printf("Enter any two number\n");
    scanf("%d %d", &a, &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    remainder = a % b;

    printf("Addition = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %d\nRemainder= %d\n",
           add, sub, mul, div, remainder);
    // printf("", sub);
    // printf("", mul);
    // printf("", div);
    // printf("", remainder);

    return 0;
}