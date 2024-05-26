#include <stdio.h>

// TODO: Write a program to check if student passed of failed. marks>30 => pass | marks < 30 => fail

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 30 && marks <= 100) {
        printf("You have passed with %d marks.\n", marks);
    }
    else if (marks <= 30 && marks >= 0){
        printf("You have failed with %d marks.\n", marks);
    }
    else {
        printf("Invalid marks. Please enter a number between 0 and 100.\n");
    }
    return 0;
}