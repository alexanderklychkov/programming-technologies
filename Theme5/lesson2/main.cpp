#include <stdio.h>

main()
{
    int mas[100][100];
    int rows, columns;

    printf("Count rows: ");
    scanf("%d", &rows);

    if (rows > 100) {
        printf("Rows cannot be more than 100");
        return 0;
    }

    printf("Count columns: ");
    scanf("%d", &columns);

    if (columns > 100) {
        printf("Columns cannot be more than 100");
        return 0;
    }

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