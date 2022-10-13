#include <stdio.h>

#define normal 0
#define bit_feild 1 

#if normal == 1
typedef struct {
    unsigned int d;
    unsigned int m;
    unsigned int y;
#endif   

#if bit_feild == 1
typedef struct {
    unsigned int d: 5;  // because the maximum number is 31 = 0b11111
    unsigned int m: 4;  // because the maximum number is 12 = 0b1111
    unsigned int y;
#endif 

}Date;

int main()
{
    Date dt = {31,2,2022};
    printf("size: %d\n", sizeof(Date));
    printf("%d/%d/%d\n", dt.d, dt.m, dt.y);
}

