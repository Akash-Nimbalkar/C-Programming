#include<stdio.h>

int main(){
    int a;
    printf("Enter the value\n");
    scanf("%d\n", &a);

    printf("The cube of %d is %d\n", a, a*a*a);
    return 0;
}