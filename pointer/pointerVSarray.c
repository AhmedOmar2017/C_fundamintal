#include <stdio.h>

/*there are three ways to point of the first element of array */

int main()
{
    int arr[5] = {2, 3, 4, 6, 11};

    int *ptr = &arr[0];     // that equal int *ptr = arr;

    printf("array is at address: %p\n", &arr[0]);
    printf("array is at address: %p\n", &arr);
    printf("array is at address: %p\n", arr);

    return 0;
}