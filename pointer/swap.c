#include <stdio.h>


void swap(int *, int *);

int main()
{
    int x = 5, y = 8;
    int *p = &x;
    swap(p, &y);
    printf("x= %d, y= %d\n", x, y);

    return 0;
}

void swap(int *n1, int *n2)
{
    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}