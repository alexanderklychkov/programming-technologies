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

    printf("\nUnsorted massive:");
    for (int i = 0; i < n; i++)
    {
        printf("%4i", mas[i]);
    }

    bool fl = true;

    while(fl)
    {
        fl = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (mas[i] > mas[i + 1])
            {
                int z = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = z;
                fl = true;
            }
        }
    }

    printf("\nSorted massive:");
    for (int i = 0; i < n; i++)
    {
        printf("%4i", mas[i]);
    }
}