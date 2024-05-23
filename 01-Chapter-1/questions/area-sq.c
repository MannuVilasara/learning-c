#include <stdio.h>

// TODO: Calculate Area  of a square by getting side as input from user

int main()
{
    float side;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    float area = side * side;
    printf("The area of suqare is %f units \n", area);

    return 0;
}