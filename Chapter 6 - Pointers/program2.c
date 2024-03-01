#include<stdio.h>

int main(){
    float pi = 3.14; 
    int length , breadth , side, radius;
    
    printf("Enter the value of radius\n");
    scanf("%d", &radius );

    printf("The area of circle is %f\n", pi * radius * radius);

    printf("Enter the value of length\n");
    scanf("%d", &length );
    printf("Enter the value of breadth\n");
    scanf("%d", &breadth );
    printf("Area of rectangle is %d\n", length * breadth);

     printf("Enter the value of side\n");
    scanf("%d", &side );

    printf("Area of square is %d\n", side * side);
    
    return 0;
}