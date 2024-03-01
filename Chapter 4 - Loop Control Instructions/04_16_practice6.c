#include<stdio.h>

int main(){
    
    int i=0, n = 7 , factorial=1;
    for (int i = 1 ; i <= 7 ; i++){
        factorial *= i;
    }

    printf("The value of factorial of %d is %d", n , factorial);



    return 0;
}