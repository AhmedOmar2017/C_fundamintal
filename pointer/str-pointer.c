#include<stdio.h>

#define array 0
#define pointer 1


int main()
{
    #if array == 1

        char other[] = "Tony Blurt";
        int x = 0;
        while(other[x] != '\0')
        {
            printf("%c",other[x++]);
        }
        printf("\n");
    #endif

    #if pointer == 1

        char *other = "Tony Blurt";
        
       
        while(*other != '\0')
        {
            printf("%c",*(other++));
        }
        printf("\n");
    #endif
}