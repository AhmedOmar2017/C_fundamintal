#include <stdio.h>
#include <stdlib.h>


/* Break is used to stop the loop and continue the rest of application */
int main()
{
   int x;
   for( x =0; x< 10; x++)
   {
       printf("%d ", x);
       if(x == 5) break;
   }
   printf("\nThanks\n");
    return 0;
}
