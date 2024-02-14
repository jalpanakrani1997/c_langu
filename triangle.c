#include <stdio.h>
main()
{
    float b, h;

    printf("Enter Base and Height:\n");
    scanf("%f %f", &b, &h);

    float area = (b * h) / 2;

    printf("Area of Triangle is %0.2f", area);
}
