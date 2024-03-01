#include<stdio.h>

int main(){
    int num=0;
    while(num<=10){
                     if(num==2){
            continue;
        }
        printf("Num is %d\n", num);
        num++;
    }
    printf("Out of while loop");
    return 0;
}