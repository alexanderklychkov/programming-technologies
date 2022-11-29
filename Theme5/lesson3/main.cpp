#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

    srand(time(NULL));
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            mas[j][i] = rand() % 10 - 2;
        }
    }

    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            printf("%7i", mas[j][i]);
        }
        printf("\n\n");
    }
}