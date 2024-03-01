#include <stdio.h>
// Incomplete
int main()
{
    /* Disclaimer : This is not a best method to solve this problem. Problem is from DSA */
    int n = 45;
    for (int i = 2; i < 45; i++){
         if (n%i == 0) {
             printf("This is not a prime number")
             break;
         }
         else { printf("This is a prime number")}
    }

    return 0;
}