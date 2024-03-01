#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter your Physics marks\n");
    scanf("%d\n", &physics);

    printf("Enter your Chemistry marks\n");
    scanf("%d\n", &chemistry);

    printf("Enter your Maths marks\n");
    scanf("%d\n", &maths);

    total = (physics + chemistry + maths)/3;
    
   if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33){
printf("Your total percentage is %f and you are fail!\n" , total );} 
    
   else {
       printf ("Your total percentage is %f and you are Pass\n" , total);
   }   
    
    return 0;
}