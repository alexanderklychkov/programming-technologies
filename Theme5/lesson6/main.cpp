#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main() 
{
    int mas[100][100];
    int rows, columns, taskNumber;

    // 1. Отсортировать массив из n x m элементов построчно: каждая строка от минимального к максимальному элементу по значению. 
    // 2. В массиве n x m элементов поменять местами первый и последний столбец. Вывести полученный результат.
    printf("Select task(1, 2): ");
    scanf("%i", &taskNumber);

    if (taskNumber > 2) {
        printf("Task not found");
        return 0;
    }

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

    printf("\n\n");


    if (taskNumber == 1) {
        bool fl = true;

        for (int i = 0; i < rows; i++) {
            while (fl)
            {
                fl = false;
                for (int j = 0; j < columns - 1; j++)
                {
                    if (mas[i][j] > mas[i][j + 1])
                    {
                        int buffer = mas[i][j];
                        mas[i][j] = mas[i][j + 1];
                        mas[i][j + 1] = buffer;
                        fl = true;
                    }
                }
            }
        }
    } else if (taskNumber == 2) {
        for (int i = 0; i < rows; i++)
        {
            int buffer = mas[i][0];
            mas[i][0] = mas[i][columns - 1];
            mas[i][columns - 1] = buffer;
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
}