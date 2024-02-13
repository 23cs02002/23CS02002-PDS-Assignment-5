#include <stdio.h>
#include <string.h>

int main()
{
    int num, i, j;
    char arr[1000], word[100];
    printf("Enter the number of characters in the array: \n");
    scanf("%d", &num);

    printf("Enter the array:\n");
    for (i = 0; i < num; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Enter the word:\n");
    scanf("%s", &word);

    for (i = 0; i < strlen(word); i++)
    {
        for (j = 0; j < num; j++)
        {
            if (word[i] == arr[j])
            {
                break;
            }
        }
        if (j == num)
        {
            printf("This word cannot be formed.\n");
            break;
        }
    }

    if (i == strlen(word))
    {
        printf("This word can be formed.");
    }
    return 0;
}