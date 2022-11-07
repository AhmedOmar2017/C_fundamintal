/*Call back function */
/*
    * there are two type funtions
    * first called utilltis or workers
    * secand called handler active function and wait for spacific argument
    * to call utillity fnction 
*/
#include <stdio.h>


/*utalitis functions*/
int sum(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);

// alias  to pointer to function
typedef int (*fun_ptr) (int, int);      // return intger - pointer of function - take two intgers

/* handler */
int calc(int a, int b, fun_ptr fun);




int main ()
{
    printf("Result = %d\n", calc(5,2, sum));
    printf("Result = %d\n", calc(5,2, div));
    printf("Result = %d\n", calc(5,2, sub));
    printf("Result = %d\n", calc(5,2, mult));
}

int sum(int a, int b)
{
    return a+b;
}


int sub(int a, int b)
{
    return a-b;
}

int mult(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    return a/b;
}


int calc(int a, int b, fun_ptr fun)
{
    return (fun(a,b));
}






