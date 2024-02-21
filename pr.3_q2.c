#include <stdio.h>
main()
{
    int i = 0, no;

    printf("Enter any number:");
    scanf("%d", &no);

    while (no != 0)
    {
        no = no / 10;
        i++;
    }
    printf("Total number of digits: %d\n", i);
}

