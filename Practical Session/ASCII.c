#include<stdio.h>

main(){
    char c;
    printf("Enter any character\n");
    scanf("%c\n", &c);
    printf("The ASCII value of %c is %d\n", c, c);
    return 0;
}