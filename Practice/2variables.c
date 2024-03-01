#include<stdio.h>

int main(){
int a = 4;
// int b = 8.5;//here it is not recommended causde 8.5 is not an integer
float b = 8.5;
char c = 'u';
int d = 45;
int e = 40-10;
printf("The value of a is %d \n",a);

printf("The value of b is %f \n",b);

printf("The value of d is %d \n",d);

printf("The value of c is %c\n",c);

printf("The sum of a and d is %d\n", a + d);

printf("The product of a and d is %d\n", a * d);

printf("The sum of a and e is %d\n", a + e);
printf("The value of e is %d\n",e);
return 0;
}