#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
   scanf("%d", &num);
   printf("Multiplication table :\n");
    for (int i = num  ; i <= 10  ; i++){
      printf("%d * %d = %d\n ", num , i , num*i );}
    
    
    
    
    return 0;
}