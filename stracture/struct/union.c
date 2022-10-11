#include <stdio.h>
/*
Unoin like struct
but this a differance the size of union depend on the size of the biggest declation element
it it store one element each time
so you can notice it store the final elemetn before print
*/

typedef union 
{
    unsigned char x;
    unsigned int y;         // the biggest ant int equal 2 byte so the size of whole unoin 2 byte
}NUM;

int main ()
{
    NUM num;
    num.x = 'A';
    printf("\n x = %c", num.x);

    num.y = 235;
    printf("\n y = %d", num.y);

     num.x = 'A';
     num.y = 235;

    printf("\n -----------------------");
     printf("\n x = %c", num.x);
     printf("\n y = %d", num.y);

     
     num.y = 235;
     num.x = 'A';
    printf("\n -----------------------");
     printf("\n x = %c", num.x);
     printf("\n y = %d", num.y);
}

