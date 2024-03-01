#include<stdio.h>
int main()
{
    int a,num=0,temp=0;
    printf("Enter  a number");
    scanf("%d",&a);
    for(num=0;num<=1000;num++)
    temp=4%num*4;
    if(
        (temp=0)
     ) printf("%d is power of 4",a);
    else{
        printf("%d is not a power of 4",a);
    }
    return 0;
}
