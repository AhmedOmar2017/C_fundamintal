#include <stdio.h>
#include <stdlib.h>

void Massage (int);

int main()
{
    Massage(5);
    return 0;
}

void Massage (int x)
{
    printf("Hello\n");
    x--;
    if(x > 0)
    {
        Massage(x);
    }
}
