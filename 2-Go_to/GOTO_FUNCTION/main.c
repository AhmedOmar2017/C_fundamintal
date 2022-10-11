#include <stdio.h>
#include <stdlib.h>

int main()
{

    char gender = '\0';
    printf("Enter your gender (f/m)? ");
    scanf("%c", &gender);
    if(gender == 'f')
    {
        goto female;
    }
    else if(gender == 'm')
    {
        goto male;
    }
    else
    {
        goto other;
    }
    female:
        printf("good morning miss.\n");
        goto finish;
    male:
        printf("good morning Mr.\n");
        goto finish;
    other:
        printf("thanks\n");
    finish:
         return 0;


}
