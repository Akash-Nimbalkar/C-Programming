//Write a program to display n terms of odd natural numbers and their sum
#include<stdio.h>

int main(){
    int i,n;
    printf("enter n\n");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i = i+2){
        printf("%d", i);
    }
    return 0;
}