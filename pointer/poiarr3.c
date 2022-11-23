#include <stdio.h>



int main()
{
    int numbers[5];
    int x, *pn;


    pn = numbers;       // initialize pointer

    // fill array
    for(x = 0; x < 5; x++)
    {
        *pn = x + 1;
        pn++;
    }
    pn = numbers;
    // Display the elements of array
    for(x = 0; x< 5; x++)
    {
        printf("number[%d] = %d\n", x, *pn++);
    }
}