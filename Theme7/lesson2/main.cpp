#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fillArray(int arr[], size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        arr[i] = rand() % 10;
    }
}

void drawArray(int arr[], size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        printf("%2i", arr[i]);
    }

    printf("\n");
}

int main()
{
    int firstArr[5], secondArr[10];
    size_t countFirst = 5, countSecord = 10;

    srand(time(NULL));

    fillArray(firstArr, countFirst);
    fillArray(secondArr, countSecord);

    drawArray(firstArr, countFirst);
    drawArray(secondArr, countSecord);

    return 1;
}