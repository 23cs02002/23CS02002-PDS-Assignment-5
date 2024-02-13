#include <stdio.h>

int main()
{
    float num, denom;
    int quo = 0;
    printf("Enter the numerator and denominator:\n");
    scanf("%f %f", &num, &denom);

    if (denom == 0)
    {
        printf("Invalid input");
    }

    else if (num >= 0 && denom > 0)
    {
        float rem = num;
        while (rem >= denom)
        {
            rem -= denom;
            quo++;
        }

        printf("Quotient = %d\nRemainder = %f", quo, rem);
    }

    else if (num >= 0 && denom < 0)
    {
        float rem = num;
        while (rem >= -(denom))
        {
            rem += denom;
            quo++;
        }

        printf("Quotient = %d\nRemainder = %f", -(quo), rem);
    }

    else if (num <= 0 && denom > 0)
    {
        float rem = num;
        while (rem<=0)
        {
            rem += denom;
            quo++;
        }

        printf("Quotient = %d\nRemainder = %f", -(quo), rem);
    }

    else
    {
        float rem = num;
        while (rem<=0)
        {
            rem -= denom;
            quo++;
        }

        printf("Quotient = %d\nRemainder = %f", quo, rem);
    }

    return 0;
}