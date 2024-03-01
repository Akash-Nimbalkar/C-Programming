#include<stdio.h>


int max(int *a[])
{
    int max=a[0];
   for(int i=0 ; i<5 ; i++)
   {
      if(a[i]>max)
      {
        max = a[i];
      }
      
   } 
   return max;
}

int min(int *a[])
{
    int min=a[0];
   for(int i=0 ; i<5 ; i++)
   {
      if(a[i]<min)
      {
        min = a[i];
      }
      
   } 
   return min;
}





int main(){
    int c,d;
    int a[5];
    printf("Enter 5 Array elements");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    c = max(&a);
    printf("%d is max\n",c);
    d = min(&a);
    printf("%d is min\n",d);
    return 0;
}