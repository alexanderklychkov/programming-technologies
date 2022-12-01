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

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < columns; i++)
    // {
    //     for (int t = 0; t < rows; t++)
    //     {
    //         for (int j = 0; j < rows - 1; j++)
    //         {
    //             int buffer = mas[i][j];
    //             mas[i][j] = mas[i][j + 1];
    //             mas[i][j + 1] = buffer;
    //         }
    //     }
    // }

    printf("\n\n");

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
}