#include <stdio.h>

int main() {
    int number, i, prime = 1;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // If the number is less than 2, it's not prime
    if (number <= 1) {
        prime = 0;
    } else {
        // Check if the number is divisible by any number from 2 to the square root of number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    // Output the result
    if (prime) {
        printf("This number is prime\n");
    } else {
        printf("This number is not prime\n");
    }

    return 0;
}
