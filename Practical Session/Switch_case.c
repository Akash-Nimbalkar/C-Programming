#include<stdio.h>

int main(){
    int num;
    printf("Enter the number between 0-9\n");
    scanf("%d", &num);

    switch(num){
 
      case 0 : printf("You entered number 0\n");
            break;

      case 1 : printf("You entered number 1\n");
            break;

      case 2 : printf("You entered number 2\n");
            break;      

      case 3 : printf("You entered number 3\n");
            break;

      case 4 : printf("You entered number 4\n");
            break;

      case 5 : printf("You entered number 5\n");
            break;
     
      default : printf("Invalid number");


    }






    return 0;
}