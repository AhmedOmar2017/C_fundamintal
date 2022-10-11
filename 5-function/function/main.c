#include <stdio.h>
#include <stdlib.h>

void call_by_value(int);
void call_by_referance(int *);
int main()
{
    int x = 5;
    call_by_value(x);
    printf("after call by value = %d\n", x);
    call_by_referance(&x);
    printf("after call by value = %d\n", x);
    return 0;
}

void call_by_value(int x)
{
    x = 10;
}
void call_by_referance(int *x)
{
    *x = 10;
}
