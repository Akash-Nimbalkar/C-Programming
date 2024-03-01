#include<stdio.h>

int main(){
    int a = 10,b = 20;
    
    printf("Value of a and b before swapping is %d %d\n",a,b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a and b after swapping is %d %d\n",a,b);
    return 0;
}