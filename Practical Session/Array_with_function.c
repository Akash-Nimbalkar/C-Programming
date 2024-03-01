#include<stdio.h>


    int sumArray(void);
    int multArray(void);
  int main()
  {
      int n,sum=0,mult=1; int a[] = {2,4,6,8,10};
      
      int sumArray()
    {
     for(int i=0 ; i<5 ; i++)
        sum += a[i];
    
     printf("The sum of all elements in an array is %d\n",sum);
    }

    int multArray()
    { int mult=1;
     for(int i=0 ; i<5 ; i++)
     {
        mult *= a[i];
     }
     printf("The multiplicaion of all elements in an array is %d\n",mult);
    }  
      printf("1.Addition\n 2.Multiplication");
      printf("Enter your choice\n");
      scanf("%d",&n);

      switch(n)
      {

      case 1 : sumArray();
           break;
      case 2 : multArray();
           break;

      }

    


    return 0;
}