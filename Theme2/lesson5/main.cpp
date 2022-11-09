#include <stdio.h>
#include <math.h>

main()
{
    float a, b, c;

    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    if (a != 0) 
    {
        float d = b * b - 4 * a * c;

        if (d > 0) 
        {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);

            printf("X1 = %f X2 = %f", x1, x2);
        }
        else if (d == 0)
        {
            float x = (-b) / (2 * a);

            printf("X = %f", x);
        }
        else {
            printf("D < 0");
        }
    }
    else 
    {
        float x = -c / b;

        printf("X = %f", x);
    }
    
}