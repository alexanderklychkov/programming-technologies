#include <stdio.h>

main()
{
    int taskNumber;
    int i = 0;

    /*
        Task 1 - Создать программу, которая с помощью цикла выводит слово «Hello» 9 раз.
        Task 2 - Создать программу, которая выводит числа от 0, увеличивая число с каждым циклом на 1, с 15 итерациями цикла.
        Task 3 - Затем вывести на экран только нечетные числа.
    */
    printf("Select task (1, 2, 3): ");
    scanf("%i", &taskNumber);

    switch (taskNumber)
    {
        case 1:
            while(i <= 9) 
            {
                printf("Hello\n");
                i++;
            }
            break;
        case 2:
            while(i <= 15)
            {
                printf("%i\n", i);
                i++;
            }
            break;
        case 3:
            while(i <= 15)
            {
                if (i % 2 == 0)
                {
                    printf("%i\n", i);
                }
                i++;
            }
            break;
        default:
            printf("Task not found");
            break;
    }
}