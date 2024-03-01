#include<stdio.h>

int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);

    if (age >= 18 ){
    printf("You can drive\n");
    }
    else {
        printf("You cannot drive\n",age);
    }


    return 0;
}