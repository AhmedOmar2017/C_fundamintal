/*example how to use array with struct*/
#include <stdio.h>


typedef struct 
{
    char *name;
    char age;
    int salary;
}EMP;

int main()
{
    EMP emp1[2];
    int x = 0;
    emp1[0].name = "Ali";
    emp1[0].age = 34;
    emp1[0].salary = 5000;

    emp1[1].name = "mohamed";
    emp1[1].age = 30;
    emp1[1].salary = 4000;


    for(x =0; x < 2; x++)
    {
        printf("\n Name: %s", emp1[x].name);
        printf("\n Age: %d", emp1[x].age);
        printf("\n Salary: %d", emp1[x].salary);
        printf("\n -----------------------");
    }
}
