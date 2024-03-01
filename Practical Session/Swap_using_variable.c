#include<stdio.h>

int main(){
    int a = 15 ,b = 27,temp;
    
    printf("Enter any two values as a and b\n");
    scanf("%d %d", a , b); 

    printf("The value of a before swapping is %d\n", a);
    printf("The value of b before swapping is %d\n", b);
    
    temp = a;
    a = b;
    b = temp;
    printf("The value of a after swapping is %d\n", a);
    printf("The value of b after swapping is %d\n", b);

    
    return 0;
}