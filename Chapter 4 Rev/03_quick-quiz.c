#include<stdio.h>

int main(){
    int num = 0;
    scanf("%d\n", &num);

    while (num <= 10 && num >= 20){
        printf("%d\n" , num);
        num++;
    }
    return 0;
}