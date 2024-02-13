#include <stdio.h>

int main()
{
    int num[10], temp;

    printf("Enter the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (num[j] > num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("After sorting, the array becomes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}