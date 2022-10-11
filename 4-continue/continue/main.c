#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    for(x = 1; x<= 10;x++)
    {
        if(x == 5) continue;
        printf("%d ", x);
    }
    printf("\n Hello world!\n");
    return 0;
}
