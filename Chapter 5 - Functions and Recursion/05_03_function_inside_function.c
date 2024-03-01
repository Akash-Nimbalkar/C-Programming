#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    return 0;
}
void goodMorning()
{
    printf("Good Morning Akash\n");
    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon Akash\n");
    goodNight();
}

void goodNight()
{
    printf("Good Night Akash\n");
}