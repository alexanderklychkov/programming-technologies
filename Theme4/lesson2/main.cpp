#include <stdio.h>

main()
{
    int taskNumber;
    int n = 7;

    /*
        Task 1 - Создайте массив, состоящий из 7 ячеек, хранящий целочисленные значения.
        Task 2 - Создать массив, подобный массиву из первого задания, в котором пользователь может вводить количество элементов с клавиатуры.
    */
    printf("Select task (1, 2): ");
    scanf("%i", &taskNumber);

    if (taskNumber == 2)
    {
        printf("Count elements: ");
        scanf("%i", &n);
    }

    int mas[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &mas[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", mas[i]);
    }
}