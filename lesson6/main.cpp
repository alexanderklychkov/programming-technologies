#include <stdio.h>

main()
{
    int day, month, year;
    bool isLeap;

    printf("Day = ");
    scanf("%i", &day);
    printf("Month = ");
    scanf("%i", &month);
    printf("Year = ");
    scanf("%i", &year);

    // Високосный год или нет

    if (year % 4 == 0) 
    {
        isLeap = true;
        printf("Leap year \n");
    }
    else 
    {
        isLeap = false;
        printf("Non-leap year \n");
    }

    // Год по восточному календарю

    printf("Eastern year - ");

    switch (year % 12)
    {
        case 0:
            printf("Monkey");
            break;
        case 1:
            printf("Rooster");
            break;
        case 2:
            printf("Dog");
            break;
        case 3:
            printf("Pig");
            break;
        case 4:
            printf("Rat");
            break;
        case 5:
            printf("Bull");
            break;
        case 6:
            printf("Tiger");
            break;
        case 7:
            printf("Rabbit");
            break;
        case 8:
            printf("Dragon");
            break;
        case 9:
            printf("Snake");
            break;
        case 10:
            printf("Horse");
            break;
        case 11:
            printf("Goat");
            break;
        default:
            printf("Error");
            break;
    }

    printf("\n");

    // Знак зодиака

    bool canCalculateSign = true;

    /*
        Вывод ошибок при определенных условиях:
        Если день меньше 0
        Если в месяце 28 - 31 дней, но задано большее число
    */
    if (day < 1) 
    {
        canCalculateSign = false;
    }
    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) 
    {
        canCalculateSign = false;
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        canCalculateSign = false;
    }
    else if ((month == 2 && isLeap && day > 29) || (month == 2 && !isLeap && day > 29)) 
    {
        canCalculateSign = false;
    }

    if (canCalculateSign) 
    {
        printf("Zodiac sign - ");

        switch(month) 
        {
            case 1:
                printf(day < 21 ? "Capricorn" : "Aquarius");
                break;
            case 2:
                printf(day < 19 ? "Aquarius" : "Pisces");
                break;
            case 3:
                printf(day < 21 ? "Pisces" : "Aries");
                break;
            case 4:
                printf(day < 20 ? "Aries" : "Taurus");
                break;
            case 5:
                printf(day < 22 ? "Taurus" : "Gemini");
                break;
            case 6:
                printf(day < 23 ? "Gemini" : "Cancer");
                break;
            case 7:
                printf(day < 24 ? "Cancer" : "Leo");
                break;
            case 8:
                printf(day < 23 ? "Leo" : "Virgo");
                break;
            case 9:
                printf(day < 24 ? "Virgo" : "Libra");
                break;
            case 10:
                printf(day < 23 ? "Libra" : "Scorpio");
                break;
            case 11:
                printf(day < 23 ? "Scorpio" : "Sagittarius");
                break;
            case 12:
                printf(day < 22 ? "Sagittarius" : "Capricorn");
                break;
            default:
                printf("Zodiac sign not found");
                break;
        }
    }
    else
    {
        printf("Zodiac sign not found");
    }
}