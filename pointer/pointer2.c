#include<stdio.h>


/*this code won't excute and will show you 
    sementation fault
    because you didn't initialize the pointer*/
int main ()
{
    short  i =13;
    short  *p;

    *p = 23;
    printf("%hi\n", *p);
    return 0;
}


