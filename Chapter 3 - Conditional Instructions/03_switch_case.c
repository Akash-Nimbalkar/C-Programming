#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (marks)
    {
    case 90-100:
        Printf("Your grade is A\n");
        break;
    
    case 80-90:
        Printf("Your grade is B\n");
        break;
    
    case 70-80:
        Printf("Your grade is C\n");
        break;
    
    case 60-70:
        Printf("Your grade is D\n");
        break;
        
    case <60:
        Printf("Your grade is E\n");
        break;
        
        
        default: printf("Invalid result");
        break;
    }





    return 0;
}