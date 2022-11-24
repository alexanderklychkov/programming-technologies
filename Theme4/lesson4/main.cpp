#include <stdio.h>

main()
{
    int mas[100];
    int n;

    printf("Count elements: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Write number: ");
        scanf("%i", &mas[i]);
    }

    int min, max;
    min = max = mas[0];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
        }

        if (mas[i] < min)
        {
            min = mas[i];
        }

        sum += mas[i];
    }

    float avg = (float)sum / (float)n;

    printf("Sum = %i, Average = %f, Min = %i, Max = %i", sum, avg, min, max);
}