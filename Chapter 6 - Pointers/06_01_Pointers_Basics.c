#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will store now address of i
    
    printf("The value of i is %d\n", i); //34
    printf("The value of i is %d\n", j); //192
    printf("The address of i is %u\n", &i); //192
    printf("The address of i is %u\n", j);//192
    printf("The address of j is %u\n", &j);//2345
    printf("The value of j is %u\n", *(&j));
    




    
    
    
    
   
    return 0;
}