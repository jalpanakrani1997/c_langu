#include <stdio.h>
main()
{
    int i = 97;
    do
    {
        printf("%c ", i);
        i += 4;
    } while (i <= 122);
}