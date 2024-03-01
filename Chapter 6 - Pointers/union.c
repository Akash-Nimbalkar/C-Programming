#include<stdio.h>

union address
{   char city[10];
    int pin;
    int hn;
    
};
int main(){
    union address a ={"Pune",415,7};
   
    
    //printf("City is %s\n",a.city);
     //printf("Address of city is %d\n",&a.city);


    //printf("The pincode is %d\n",a.pin);
    //printf("Address of pin is %d\n",&a.pin);

    printf("The house no is %d\n",a.hn);
    printf("Address of house is %d\n",&a.hn);
    
    
    return 0;
}