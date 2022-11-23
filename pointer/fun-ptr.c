#include <stdio.h>

void By_ref(int *x);

int main()
{
    int a = 6;
    printf("a before calling = %d\n", a);

    By_ref(&a);
    printf("a after calling = %d\n", a);
}


void By_ref(int *x)
{
    *x = 10;
}