#include <stdio.h>

int main() {
    int marks;

    // Ask the user for their marks
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Check if the entered marks are valid
    if (marks < 0 || marks > 100) {
        printf("Oops! Please enter marks between 0 and 100.\n");
        return 1;  // Exit the program if the input is invalid
    }

    // Determine and print the grade based on marks
    if (marks >= 90) {
        printf("Your grade is A\n");
    } else if (marks >= 80) {
        printf("Your grade is B\n");
    } else if (marks >= 70) {
        printf("Your grade is C\n");
    } else if (marks >= 60) {
        printf("Your grade is D\n");
    } else {
        printf("Your grade is E\n");
    }

    return 0;
}