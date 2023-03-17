#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
       char small = tolower(x);
       putchar(small);
    }
    return 0;
}
