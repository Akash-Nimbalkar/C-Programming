#include<stdio.h>
//INCOMPLETE
float temperature(float celcius);
int main(){
    float celcius,farhenite;
    printf("Enter the value of celcius temp.\n");
    scanf("%f\n",&celcius);
    printf("The value of temp. in farhenite is %f\n", temperature(celcius));
    return 0;
}

float temperature(float celcius){
   float farhenite;
   farhenite = (celcius*1.8) + 32;
   return farhenite;
}
