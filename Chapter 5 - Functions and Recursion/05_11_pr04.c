#include<stdio.h>
//INCOMPLETE
int fibonacci(int x);

int main(){
    int a = 1;
    printf("The value of fibonacci number next to %d is %d\n", a , fibonacci(a));
    return 0;
}

int fibonacci(int x){
    if (x==0 || x==1){
        return 0;
    }
    else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}
