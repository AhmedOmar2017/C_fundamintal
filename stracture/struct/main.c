#include <stdio.h>


typedef struct
{
    int basic;
    int bonus;
}Salary;

typedef struct
{
    char *name;
    char age;
    Salary salary;
}Emp;

Emp emp1, emp2;


int main()
{
    emp1.name = "Ali";
    emp1.age = 38;
    emp1.salary.basic = 4000;
    emp1.salary.bonus = 1000; //altenative

    printf("\n Name: %s", emp1.name);
    printf("\n Age: %d", emp1.age);
    printf("\n Basic salary: %d", emp1.salary.basic);
     printf("\n Bonus salary: %d", emp1.salary.bonus);
}
