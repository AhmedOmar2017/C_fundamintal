#include <stdio.h>



int main()
{
    short numbers[5] = {4, 5, 6, 7,3};
    short *ptr = numbers;
    /* four methods are the same */
    printf("3rd elelment = %i\n", numbers[2]);
    printf("3rd elelment = %i\n", ptr[2]);
    printf("3rd elelment = %i\n",*(numbers+2)); 
    printf("3rd elelment = %i\n",*(ptr+2));         // increase the pointer twice and back with value 
}