#include <stdio.h>
#define arr 0
#define ptr 1


#if arr == 1

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

#endif




#if ptr == 1

int stringLength(char *);


int main ()
{
    char *text = "embedded systems";
    printf("Length = %d characters\n", stringLength(text));

    return 0;
}
int stringLength(char *string)
{
    int x = 0;
    while(*string != '\0')
    {
        x++;
        string++;
    }
    return x;
}

#endif