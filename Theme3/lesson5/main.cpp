#include <stdio.h>

main()
{
    int i = 1;
    int sum = 0;

    while(i < 100)
    {
        sum = sum + i;
        printf("%i+", i);
        i = i + 1;
    }
    sum = sum + i;
    printf("%i=%i", i, sum);
}