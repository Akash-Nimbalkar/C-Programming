#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    
    for (int i = 0 ; i<n ; i++){
    printf("The value of i is %d\n", i+1); /* i+1 is very imp because we have to
                                            eliminate 0 as it is not natural number */
                                           
    }
    return 0;
}