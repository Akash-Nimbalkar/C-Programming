//Write a program to display the multiplication table of a given number
#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1 ; i<=10 ; i++){
        printf("%d*%d = %d\n" ,n, i ,n*i);
    }
    

    return 0;
}