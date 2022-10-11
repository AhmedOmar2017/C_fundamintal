#include <stdio.h>
#include <stdlib.h>

#define size  7

int main()
{
    int value[size] = {45, 23, 34, 56, 72, 12, 18};
    int current_element = 0, next_elemet = 0, temp = 0;
    for(current_element = 0; current_element < size - 1; current_element++)
    {
        for(next_elemet = current_element + 1; next_elemet < size; next_elemet++)
        {
            if(value[next_elemet] < value[current_element])
            {
                temp = value[current_element];
                value[current_element] = value[next_elemet];
                value[next_elemet] = temp;
            }
        }
    }
    for(current_element = 0; i < size; i++)
        {
            printf("%d ", value[i]);
        }
    return 0;
}
