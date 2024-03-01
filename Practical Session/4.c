#include<stdio.h>


    int main()
{   int i,j;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
              if(i==j)
              continue;
            
            printf("%d %d\n",i,j);
           
        }

    }
    return 0;
}

    