#include <stdio.h>
// LSB: last signficant bit     0b0000 0001
/* to check the LSB you and the number with 1*/

// MSB: most signficant bit     0b1000 0000
/* to check the MSB you and the number with 0b1000 0000*/

#define LSB 0
#define MSB 0
#define toggle 0
#define set  0
#define clear 0
#define get_value 1



int main(){
    int num;

    printf("enter a number:");
    scanf("%d", &num);

    #if(LSB  == 1)

        if(num & 1){
            printf("LSB of %d is set\n", num);
        }
        else{
            printf("LSB of %d is clear\n", num);
        }
    #endif

    #if(MSB  == 1)
         int  bit,msb;
        bit = (sizeof(int) *8)- 1;
        msb = 1 << bit;  
        if(num & msb){
            printf("MSB of %d is set\n", num);
        }
        else{
            printf("MSB of %d is clear\n", num);
        }
     #endif   
     #if(toggle == 1)
        int  n, new_num;

        printf("\nenter nth bit to taggle a number(1:31):");
        scanf("%d", &n);
        new_num ^= (1 << n);
        printf("\n before %d", num);
        printf("\n after toggle %d\n", new_num); 
    #endif
     #if(set == 1)
        int  n, new_num;

        printf("\nenter nth bit to taggle a number(1:31):");
        scanf("%d", &n);
        new_num = num | (1 << n);
        printf("\n before %d", num);
        printf("\n after set %d\n", new_num); 
    #endif

     #if(clear == 1)
        int  n, new_num;

        printf("\nenter nth bit to taggle a number(1:31):");
        scanf("%d", &n);
        new_num = num & ~(1 << n);
        printf("\n before %d", num);
        printf("\n after clear %d\n", new_num); 
    #endif
     #if(get_value == 1)
        int  n, new_num;

        printf("\nenter nth bit to taggle a number(1:31):");
        scanf("%d", &n);
        new_num = (num>>n) & 1;
        printf("\n nth bit is: %d\n", new_num); 
    #endif
    return 0;

}