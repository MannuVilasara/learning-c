#include <stdio.h>

// NOTE: Conditional Statements [if-else, switch]

int main()
{
    // if (condition) {
    //     code
    // }else {
    //      code
    // }

    // int age;
    // printf("Enter age: ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("You are eligible to vote.\n");
    // }
    // else
    // {
    //     printf("You are not eligible to vote.\n");
    // }

    //* else if
    // int a, b;
    // printf("Enter number 1: ");
    // scanf("%d", &a);
    // printf("Enter number 2: ");
    // scanf("%d", &b);

    // if (a > b)
    // {
    //     printf("no. 1 is greater than no.2 \n");
    // }
    // else if (a == b)
    // {
    //     printf("no. 1 is equal to no. 2\n");
    // }
    // else if (2 < 3)
    // {
    //     printf("something \n");
    // }
    // else
    // {
    //     printf("no. 1 is less than no. 2\n");
    // }

    //* (conditional operator) or ternary operator [?]
    //~ Condition ? doSomething if TRUE : doSomething if FALSE;
    // int a, b;
    // printf("Enter number 1: ");
    // scanf("%d", &a);
    // printf("Enter number 2: ");
    // scanf("%d", &b);
    // (a > b) ? printf("no. 1 is greater than no.2 \n")
    //         : printf("no. 1 is less than or equal to no. 2\n"); // ternary operator

    //* Switch Case
    // int day;
    // printf("Enter day (1-7): ");
    // scanf("%d", &day);
    // switch (day)
    // {
    //     case 1:
    //         printf("Monday\n");
    //         break;
    //     case 2:
    //         printf("Tuesday\n");
    //         break;
    //     case 3:
    //         printf("Wednesday\n");
    //         break;
    //     case 4:
    //         printf("Thursday\n");
    //         break;
    //     case 5:
    //         printf("Friday\n");
    //         break;
    //     case 6:
    //         printf("Saturday\n");
    //         printf("yo\n");
    //         break;
    //     case 7: {
    //         printf("Sunday\n");
    //         printf("yo2\n");
    //         break;
    //     }
    //     default:
    //         printf("Invalid day\n");
    //         break;
    //     }

    //! ↑ 1. order doesn't matter of cases
    //! ↓ 2. nested switch is allowed

    // switch (2)
    // {
    // case 2:
    //     switch (3)
    //     {
    //     case 3:
    //         printf("something \n");
    //         break;

    //     default:
    //         break;
    //     }
    //     break;

    // default:
    //     break;
    // }

    return 0;
}