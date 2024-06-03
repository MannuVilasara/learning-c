#include <stdio.h>

// TODO: Print numbers from zero to n where n is number give by user

int main()
{
    int i = 0, n;
    printf("Enter Number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}