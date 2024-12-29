#include <stdio.h>

int calcFactorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, total = 0;

    // Ask the user to input a number
    printf("Enter a number (n <= 20): ");
    scanf("%d", &n);

    // Check if the number is greater than 20
    if (n > 20) {
        printf("Error: Please enter a number less than or equal to 20.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of factorials from 1 to n
    for (int i = 1; i <= n; i++) {
        total += calcFactorial(i);
    }

    // Show the result
    printf("The sum of the factorials is: %d\n", total);

    return 0;
}
