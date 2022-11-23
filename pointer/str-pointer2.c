#include <stdio.h>


int main()
{
    char * other = "Tony Blurt";
    while(*other != '\0')
    {
        printf("%c --> %p\n", *other, other);
        other++;
    }
    return 0;
}