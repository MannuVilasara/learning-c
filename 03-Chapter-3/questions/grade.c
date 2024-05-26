#include <stdio.h>

// TODO: Write a program to give grades to students
/*
!  marks < 30 => C
!  30 <= marks < 70 => B
!  70 <= marks < 90 => A
!  90 <= marks <= 100 => A+
*/

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks < 30 && marks >= 0)
    {
        printf("Your grade is C\n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Your grade is B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Your grade is A\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A+\n");
    }
    else
    {
        printf("Invalid marks\n");
    }

    return 0;
}