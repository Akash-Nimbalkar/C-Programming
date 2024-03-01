#include <stdio.h>

int main()
{
    int marks, grade;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (grade)
    {

    case 1:
        if (marks > 90 && marks < 100)
        {
            printf("Your grade is A\n");
        }
        break;

    case 2:
        if (marks > 80 && marks < 90)
        {
            printf("Your grade is B\n");
        }
        break;

    case 3:
        if (marks > 70 && marks < 80)
        {
            printf("Your grade is C\n");
        }
        break;

    case 4:
        if (marks > 60 && marks < 70)
        {
            printf("Your grade is D\n");
        }
        break;

            case 5: if (marks < 60)
        {
            printf("Your grade is E\n");
        }
        break;

    default:

    {
        printf("FAIL!\n");
    }
    break;
    }

    return 0;
}