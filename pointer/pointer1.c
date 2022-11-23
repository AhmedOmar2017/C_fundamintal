/*
            pointer

    pointer is address for variable 
    two simple are used with pointer
    (*) to point to the address of varible  (dereferance operator)
    (&) to bring back the address (address of operator)
            */
#include <stdio.h>


int main()
{
    int x = 5;
    //pointer must initialize before use  
    int *ptr = NULL;         // (*) mean the ptr is pointer which store address   

    ptr = &x;

    printf("address of x: %p\n", ptr);
    return 0;

}


