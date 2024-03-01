#include<stdio.h>
int sum(void);
int product (void);
int main()
{ int result,n;
int sum()
{
int a[4],x,u;
printf("\nEnter the array elements =");
  for(x=0;x<4;x++)
  {
    scanf("%d",&a[x]);
   }
  printf("\nThe entered array is as :");
  for(x=0;x<4;x++)
  {
   printf("\n%d",a[x]);
 }

 

  int d=0,b;
  for(x=0;x<4;x++)
  {
   d=d+a[x];
  }
  printf("\nSum=%d",d);
}


int product()
{
int a[4],x,u;
printf("\nEnter the array elements =");
  for(x=0;x<4;x++)
  {
    scanf("%d",&a[x]);
   }
  printf("\nThe entered array is as :");
  for(x=0;x<4;x++)
  {
   printf("\n%d",a[x]);
 }

 

  int d=1,b;
  for(x=0;x<4;x++)
  {
   d=d*a[x];
  }
  printf("\nproduct=%d",d);
}
printf("\nEnter 1 for sum \n 2 for product of array:");
scanf("%d",&n);
switch(n)
{
case 1:sum();
      break;
case 2: product();
      break;
    
    return 0;
    
}