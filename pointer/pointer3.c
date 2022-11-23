#include<stdio.h>


int main ()
{
    int x, y;       // declration for varibles x, and y
    int *p;         // decleration for pointer p


    x = 0xDEAD;     // intialize the x valrible
    y = 0xBEEF;     // intialize the y valrible
    p= &x;          // intialize the p pointer with address varible x


    *p = 0x1000;     // put 0x1000 in x       
    p= &y;           // put the address of y in pointer p   
    *p = 0x12000;    // put 0x12000 in y


    printf("X = %p, Y = %p\n", x, y); 
}
