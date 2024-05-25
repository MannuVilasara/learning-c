#include <stdio.h>

// TODO: Write a program to check if a number is divisible by 2 or not
// TODO: Tell if the number is even or odd [if even => will be divisble by 2; else => odd]

int main()
{
    int num;
    // even => 1
    // odd => 0

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d \n", num % 2 == 0);
    return 0;
}