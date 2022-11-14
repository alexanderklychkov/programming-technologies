#include <stdio.h>

main()
{
    int n;
    int minNum = __INT_MAX__;
    int maxNum = 0;
    int sum = 0;

    printf("Write count elements: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        printf("Write number: ");
        scanf("%i", &num);

        sum += num;

        if (minNum > num)
        {
            minNum = num;
        }

        if (maxNum < num)
        {
            maxNum = num;
        }
    }

    printf("Min number: %i\n", minNum);
    printf("Max number: %i\n", maxNum);
    printf("Sum: %i\n", sum);
    printf("Average: %i", sum / n);
}