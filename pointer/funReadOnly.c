#include <stdio.h>

/* this code won't excute and it will show error 
    because if you use const with pointer you can't modify
     and it will be read only*/
void modArr(const int []);

int main()
{
    int numbers[3] = {2,4,5};
    modArr(numbers);
    return 0;
}

void modArr(const int num[])
{
    int x = 0;
    for (x = 0; x < 3; x++)
    {
        num[x] = num[x] * num[x];   // will not work because it is read only
    }
}
