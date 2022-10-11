#include <stdio.h>

const char *Month[13] ={"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
"Aug", "Sep", "Oct", "Nov", "Dec"};

enum Months{ Jan = 1, Feb, Mar, Apr, May, Jun, Jul,Aug, Sep, Oct, 
Nov, Dec};

int main()
{
    enum Months month;
    for (month = Jan; month <= Dec; month++)
    {
        printf("\n %2d  %s", month, Month[month]);
    } 
}