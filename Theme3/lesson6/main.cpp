#include <stdio.h>

main()
{
    int taskNumber;

    /*
        Task 1 - Создать программу, которая с помощью цикла выводит таблицу умножения на 5 от 1 до 10.
        Task 2 - Составьте программу, которая завершает свою работу при вводе определенной цифры (Например, 7).
    */
    printf("Select task (1, 2): ");
    scanf("%i", &taskNumber);

    switch (taskNumber)
    {
        case 1:
            for (int i = 1; i <= 10; i++)
            {
                printf("5 * %i = %i\n", i, 5 * i);
            }
            break;
        case 2:
            {
                int correctAnswer = 7;
                int userAnswer = 0;

                while (userAnswer != correctAnswer)
                {
                    printf("Enter value: ");
                    scanf("%i", &userAnswer);

                    if (userAnswer > correctAnswer)
                    {
                        printf("This value is greater than the correct one.\n");
                    }
                    else if (userAnswer < correctAnswer)
                    {
                        printf("This value is less than the correct one.\n");
                    }
                }
                
                printf("This value is correct!");
            }
            break;
        default:
            printf("Task not found");
            break;
    }
}