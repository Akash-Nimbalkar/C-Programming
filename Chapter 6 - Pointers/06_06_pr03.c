#include<stdio.h>
//INCOMPLETE
void multiplyBy(int a);
int main(){
    int i = 5;
    printf("The value of i is %d\n", i);
    multiplyBy(*(&i));
    printf("The address of i is %u\n", &i);

    return 0;
}
void multiplyBy(int a){
    printf("The value of a is  %d\n", 10*a);
     
}
