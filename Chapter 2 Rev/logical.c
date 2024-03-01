#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d\n",&age);

    if (age <= 70 && age >= 18){
    printf("You can drive");
    }
  
    else {
        printf("You cannot drive");
    }
    return 0;
}