#include <stdio.h>

main()
{
    int mas[100][100];
    int rows, columns;

    printf("Count rows: ");
    scanf("%d", &rows);

    printf("Count columns: ");
    scanf("%d", &columns);

    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            printf("Write number: ");
            scanf("%i", &mas[j][i]);
        }
    }

    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            printf("%3i", mas[j][i]);
        }
        printf("\n\n");
    }
}