#include<stdio.h>

int main(){
    int n,i,temp=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(i=2 ; i<n ; i++){
        if(n%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not prime number",n);
    }









    return 0;
}