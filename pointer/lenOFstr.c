#include <stdio.h>

int stringLength(char []);


int main ()
{
    char text[] = "embedded systems";
    printf("Length = %d characters\n", stringLength(text));

    return 0;
}
int stringLength(char string[])
{
    int x = 0;
    while(string[x] != '\0')
    {
        x++;
    }
    return x;
}