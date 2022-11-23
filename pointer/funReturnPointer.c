#include <stdio.h>

char *strRev(char *);

int main ()
{
    char *str = " E N G I N E E R";
    printf("%s \n", strRev(str));
    return 0;
}

char *strRev(char *input)
{
    /* we use static to make sure the whole elements of array 
    still remind although we out from the function */
    static char output[20];
    char *i = input;
    char *o = output;
    /*increment  untill reach the final element in the array*/
    while(*i != '\0')
    {
        i++;
    }
    i--;    // without this line you will count '\0' element    

    /* this loop to store the reversed elements in pointer o */
    while(i >= input)
    {
        *o = *i;
        i--;
        o++;

    }
    *o = '\0';
    return (output);
}

