//sum(n) = sum(n-1) + n//
#include<stdio.h>
sum (n);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d\n", &n);
    sum (n);
    printf("The sum of first %d natural number is %d\n", n , sum(n));
    return 0;
}
sum (n){
     if (n==1){
         return 0;
     }
     else {

         return sum(n-1) + n;
     }
}
