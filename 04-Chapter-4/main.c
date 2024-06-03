#include <stdio.h>

// NOTE: Loop Control Statements

int main()
{
    // TODO: Print hello world five times
    //! Wrong Approach
    // printf("Hello World!\n");
    // printf("Hello World!\n");
    // printf("Hello World!\n");
    // printf("Hello World!\n");
    // printf("Hello World!\n");

    //* Correct Approach
    //* Loops [for-loop,while-loop,do-while-loop]

    //! for loop
    //? i => iterator ; counter (can be int, float, character)
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Hello World! %d\n", i + 1);
    // }

    //? i++ (post increment) => use then increase | ++i (pre increment) => increase then use
    //? i-- (post decrement) => use then decrease | ++i (pre decrement) => decrease then use

    //! Infinite loop
    // for (;;)
    // {
    //     printf("Hello World \n");
    // }

    //! while loop
    // int f = 0;
    // while (f < 5)
    // {
    //     printf("Hello World! %d\n", f + 1);
    //     f++;
    // }

    //! do-while loop
    // int g = 0;
    // do
    // {
    //     printf("Hello World! %d\n", g + 1);
    //     g++;
    // } while (g > 5); //^ g < 5 will be another condition to test

    //! break => exit loop
    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     printf("Hello World! %d\n", i);
    // }
    /*
    ?OUTPUT
    Hello World! 0
    Hello World! 1
    Hello World! 2
    */

    //! continue => skip to next iteration
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("Hello World! %d\n", i);
    }
    /*
    ?OUTPUT
    Hello World! 0
    Hello World! 1
    Hello World! 2
    Hello World! 4
    */

       return 0;
}
