#include<stdio.h>

int main()
{
    int x[3]= {1, 2,3};
    int y;
    int *p = NULL; 
    p = &x;
    y = 5 + *(p++);         // that means increment pointer  p by one which point to second element
    printf("%d\n", y);
    y = 5 + (*p)++;         //  that means increment the value which pointer is point to.
     printf("%d\n", y);
}