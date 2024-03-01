#include <stdio.h>
float average(int a, int b, int c); 
int main()
{   int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d\n", &a);
    printf("Enter the value of b\n");
    scanf("%d\n", &b);
    printf("Enter the value of c\n");
    scanf("%d\n", &c);
    printf("The value of average is %f", average(a,b,c));

    return 0;
}

float average(int a, int b, int c)
{ float result;
  result = (float)(a + b + c)/3;
  return result;
}