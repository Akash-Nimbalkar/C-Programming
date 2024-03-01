#include<stdio.h>

int main(){
    int a;
    printf("Enter the desired value of a\n");
    scanf("%d\n", &a);

    while (a < 10){
        printf("%d\n", a);
        a++;
    }


    return 0;
}


