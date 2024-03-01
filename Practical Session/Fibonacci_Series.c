#include<stdio.h>

int main(){
    int t1=0,t2=1,nt=0,n;
    printf("Enter the range n");
    scanf("%d",&n);
    
    printf("FIBONACCI SERIES = %d\t %d",t1,t2);
    
    nt = t1+t2;

    while(nt<=n){
      printf("%d\t",nt);
      t1 = t2;
      t2 = nt;
      nt=t1+t2;
    
}
  printf("%d\t",nt);
    return 0;
}

