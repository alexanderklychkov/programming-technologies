#include <stdio.h>
#include <conio.h>

int calc(int a, int b, char zn)
{
    switch (zn)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '/':
        return a / b;
        break;
    case '*':
        return a * b;
        break;
    default:
        printf("Error");
        return 0;
        break;
    }
}

int main()
{
    int q, w;

    printf("q = ");
    scanf("%d", &q);

    printf("w = ");
    scanf("%d", &w);

    char r;

    printf("oper = ");
    r = getch();
    printf("%c\n", r);

    printf("%d", calc(q, w, r));

    return 1;
}