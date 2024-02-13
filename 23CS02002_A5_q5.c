#include <stdio.h>

int main()
{
    int num, sum = 0;
    char resp;

    for (int i = 0;; i++)
    {
        printf("Provide the number:\n");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            sum += num;
        }

        printf("Do you wish to continue?\n");
    input:
        scanf(" %c", &resp);

        if (resp == 'Y' || resp == 'y')
        {
            continue;
        }
        else if (resp == 'N' || resp == 'n')
        {
            break;
        }
        else
        {
            printf("Invalid input\n");
            goto input;
        }
    }

    printf("The sum is: %d", sum);

    return 0;
}