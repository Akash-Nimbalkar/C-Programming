#include <stdio.h>
int sumAndAvg(int a, int b, int *sum , int *avg)
{
    int sum = a + b;
    float avg = sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %d\n",avg);

    return 0;
}
