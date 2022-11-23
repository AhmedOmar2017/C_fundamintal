#include<stdio.h>



int main ()
{
    int arr[3] = {1, 2, 3};

    int *p = arr;

    for(int x = 0; x < 3; x++)
    {
        printf("element %d = %d\n",x , *p++);
      //  p++;      // alterntive 
    }
}
