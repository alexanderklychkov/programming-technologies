#include <stdio.h>

main()
{
    int i;
    int sum = 0;

    for (i = 1; i < 100; i++)
    {
        sum = sum + i;
        printf("%i + ", i);
    }

    sum = sum + i;
    printf("%i = %i", i, sum);
}