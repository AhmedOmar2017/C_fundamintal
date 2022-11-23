#include<stdio.h>


int main ()
{
    int x = 5;       // declration for varibles x
    int *iptr;         // decleration for pointer iptr 




   
    iptr= &x;           // put the address of x in pointer iptr   
    *iptr = 7;             // put 7 in x


    printf("address of x: %p\n", &x); 
    printf("address of x: %p\n", iptr);

    printf("value of x: %d\n", x);  
    printf("value of *iptr: %d\n", *iptr); 
}
