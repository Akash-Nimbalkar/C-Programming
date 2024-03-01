#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
          
            sum = sum + i;
        }
    }
    if(sum == n+1){
        printf("%d is prime number",n);
    }
    return 0;
}