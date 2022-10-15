#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ABS 0
#define FLOOR 0
#define CEIL 0
#define ROUND 0
#define RAND 1

int main(){
    #if ABS ==1
        int m = abs(200);
        int n = abs(-200);
        printf("value of m: %d\n", m);
        printf("value of m: %d\n", n);
    #endif

    #if FLOOR == 1
        float i = 5.1, j = 5.9, k= -5.4,l= -6.9;
        printf("floor of i: %f = %f\n", i, floor(i));
        printf("floor of j: %f = %f\n", j, floor(j));
        printf("floor of k: %f = %f\n", k, floor(k));
        printf("floor of l: %f = %f\n", l, floor(l));
    #endif

    #if CEIL == 1
        float i = 5.1, j = 5.9;
        printf("ceil of i: %f = %f\n", i, ceil(i));
        printf("ceil of j: %f = %f\n", j, ceil(j));
    #endif
    #if ROUND == 1
        float i = 5.1, j = 5.9;
        printf("round of i: %f = %f\n", i, round(i));
        printf("round of j: %f = %f\n", j, round(j));
    #endif

    #if RAND == 1
        /* if i want to use random function as abslute*/
        printf("rand  =%d\n", rand());
        printf("rand  =%d\n", rand());

        /*if want to use in range*/

        int x = 0, r = 0;
        const int MAX = 7;
        const int MIN = 3;
        int seed;
        printf("enter seed");
        scanf("%d", &seed);
        srand(seed);
        for (x = 0; x< 10;x++)
        {
            r = rand() % (MAX - MIN +1) + MIN;
            printf("\n rand = %d", r);
        } 
    #endif
}
