#include<stdio.h>


    struct Person
{
    char name[10];
    int age;
    int weight;
    int contactNo;
}ptr[5];

void show(struct Person *);

int main()
{
    //struct Person ptr[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("\nEnter Person's Information :\n");
    printf("\nPerson's' name:\t");
    scanf("%s", &ptr[i].name);
    printf("\nEnter Person's Age :\t");
    scanf("%d", &ptr[i].age);
    printf("\nPerson's' Weight:\t");
    scanf("%d", &ptr[i].weight);
    printf("\nEnter Person's Contact Number :\t");
    scanf("%d", &ptr[i].contactNo);

  }
   show(&ptr);
    return 0;
}

void show(struct Person *st)
{
  int i;
  printf("\n ### Displaying Persons Information ###");
   for(i=0;i<5;i++)
   {
    printf("\n Name of a Person  %s", st->name);
    printf("\n Age of a Person  %d\t\t", st->age);
    printf("\n Weight of a Person  %d\t\t", st->weight);
    printf("\n Contact No. of a Person  %d\t\t", st->contactNo);
    printf("\n*** _ *** _ *** _");
    st++;
    }
}

    