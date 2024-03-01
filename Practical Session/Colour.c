#include<stdio.h>

int main(){
    char color;
    printf("Enter the first character of color\n");
    scanf("%c", &color);

    switch(color){
      case 'R' : printf("Color is Red");
           break;    

      case 'Y' : printf("Color is Yellow");
           break;

      case 'B' : printf("Color is Blue");
           break;

       default : printf("INVALID");
           break;    
    }
    return 0;
}