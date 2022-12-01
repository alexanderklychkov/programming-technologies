#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
    int mas[100][100];
    int rows, columns;

    printf("Count rows: ");
    scanf("%d", &rows);

    if (rows > 100) 
    {
        printf("Rows cannot be more than 100");
        return 0;
    }

    printf("Count columns: ");
    scanf("%d", &columns);

    if (columns > 100) 
    {
        printf("Columns cannot be more than 100");
        return 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("Write number: ");
            scanf("%i", &mas[i][j]);
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

    int newMas[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            newMas[i][j] = mas[j][i];
        }
    }

    printf("\n\n");

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%3i", newMas[i][j]);
        }
        printf("\n");
    }

    printf("%i", newMas[1][2]);
}