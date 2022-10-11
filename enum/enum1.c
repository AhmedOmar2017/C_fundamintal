#include <stdio.h>

enum week{sat, sun, mon, tue, wen, thur, fri};
int main()
{
    enum week day;
    day = wen;
    printf("%d\n", day);
}