#include<stdio.h>

int main(){
    // 97-122 ===> a-z ASCII Values
    char character;
    printf("Enter your character\n");
    scanf("%c", &character);
    
    if (character <= 122 && character >= 97){
        printf("It is lowercase\n");
    }
    else {
        printf("It is not lowercase\n");

    }
    
    return 0;
}