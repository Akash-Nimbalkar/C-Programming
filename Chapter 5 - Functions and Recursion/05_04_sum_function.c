#include<stdio.h>
/* Sum is a function which takes a and b as input and returns an integer
as output*/
int sum(int a,int b); // Function Prototype declaration


int main(){
    int c;
   c = sum(12,15); // Function Call
   printf("The value of c is %d\n", c);

    return 0;
}

int sum(int a,int b){
    int result;
    result = a + b;
    return result; 
}