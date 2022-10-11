#include <stdio.h>
#include <stdlib.h>
unsigned long long fictrial(unsigned int );
int main()
{
    unsigned int num;
    unsigned long long fact;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact = fictrial(num);
    printf("Fictorial %d is %llu\n", num, fact);
    return 0;
}

unsigned long long fictrial(unsigned int i)
{
  if(i == 0) return 1;
  else return (i * fictrial(i - 1));
}
