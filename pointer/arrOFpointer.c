#include <stdio.h>
#define string char*

int main()
{
    int x;
    string title = "some of fruit: ";
    // it store address of the first element
    char *fruit[] = {           // array of pointers 
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberray"
    };
    printf("%s\n", title);
    for(x = 0;x<(sizeof(fruit)/sizeof(fruit[0]));x++)
    {
        printf("%s\n", fruit[x]);
    }
}