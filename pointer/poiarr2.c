#include<stdio.h>



int main ()
{
    long arr[3] = {1, 2, 3};

    long *p = &arr;

    *p += 4;        // add the first element in arr 4 and it will equal 5
    p++;            // move to the second element in arr
    printf("%d\n", *arr);
    *p = 0xDEAB90;      // put this value in the second element
    p++;           // move to the third element in arr     
    *p = 0xAEFB00;      // put this value in the third element     
    p -=2;         // move back to the first element  in the arr         

    *p = 0xBADFA0;      // put this value in the first element  

    for(int x =0; x < 3; x++)
    {
        printf("%p\n", arr[x]);
    }

}    