#include <stdio.h>

main()
{
    int i = 5;
    int sum = 0;

    while(i <= 15)
    {
        sum += i;
        i++;
    }

    printf("Sum = %i", sum);
}