#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    int digits[10], num_digits = 0, digit_pos, c, sum = 0;
    while (num)
    {
        digits[num_digits++] = num % 10;
        num /= 10;
    }
    printf("The number of digits is %d\n", num_digits);

    for (int i = 0; i < num_digits; i++)
    {
        digit_pos = digits[i];
        c = 0;

        for (int j = (i - 1); j >= 0; j--)
        {
            if (digit_pos == digits[j])
            {
                c = 1;
                break;
            }
        }
            if (!c)
            {
                sum += digits[i];
            }
    }

    printf("Sum of unique digits of this number is %d\n", sum);

    return 0;
}