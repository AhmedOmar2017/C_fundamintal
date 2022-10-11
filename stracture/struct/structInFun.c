/*example how to use struct  in fuction 
    1- by referance
    2- by value
*/

/*
notce
dot uses to refer value .
->  ses to refer referance 
*/
#include <stdio.h>

#define value 1
#define referance 0

typedef struct 
{
    char *name;
    char age;
    int salary;
}EMP;
void By_value(EMP);
void By_ref (EMP*);
int main()
{
    EMP emp1 = {"ali", 34,5000};
    EMP *ptr_emp = &emp1;
    #if (value == 1)
        By_value(emp1);
    #endif


    #if(referance == 1)
       By_ref (ptr_emp); 
    #endif
    
    printf("\n Name: %s", ptr_emp->name);
    printf("\n Age: %d", ptr_emp->age);
    printf("\n Salary: %d", ptr_emp->salary);
    printf("\n -----------------------");


}

#if (value == 1)
    void By_value(EMP emp)  
    {
        emp.name = "mohamed";
        emp.age = 30;
        emp.salary = 4000;

        printf("\n by value");
        printf("\n Name: %s", emp.name);
        printf("\n Age: %d", emp.age);
        printf("\n Salary: %d", emp.salary);
        printf("\n -----------------------");
    }
#endif

#if(referance == 1)
    void By_ref (EMP *ptr_emp)
    {
        ptr_emp->name = "mohamed";
        ptr_emp->age = 30;
        ptr_emp->salary = 4000;

        printf("\n By_referance");
        printf("\n Name: %s", ptr_emp->name);
        printf("\n Age: %d", ptr_emp->age);
        printf("\n Salary: %d", ptr_emp->salary);
        printf("\n -----------------------");
    }
#endif
