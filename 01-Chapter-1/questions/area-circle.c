#include <stdio.h>

// TODO: Find the area of circle by getting radius of square

int main()
{
    float radius;
    float area;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    printf("The area of circle is: %f\n", area);
    return 0;
}