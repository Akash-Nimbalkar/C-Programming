#include<stdio.h>
    int fact(int);

int main(){
    
    int n,x;
    printf("enter the no. whose fact you want");
    scanf("%d",&n);
    x = fact(n);
    printf("factorial of %d is %d",n,x);
    return 0;
}
int fact(int n)
    {
      if(n == 0 ) return 1;
      else return n*fact(n-1);

    }