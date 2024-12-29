#include <stdio.h>  // For printing and taking input

// This function figures out the largest number among three
void findLargest() {
    int num1, num2, num3;  // Variables to store the three numbers

    // Ask the user to enter three numbers
    printf("Enter three numbers: ");
    
    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers to figure out the largest one
    if (num1 >= num2 && num1 >= num3) {
        // If num1 is bigger or equal to both num2 and num3, it's the largest
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        // If num2 is bigger or equal to both num1 and num3, it's the largest
        printf("The largest number is: %d\n", num2);
    } else {
        // Otherwise, num3 is the largest
        printf("The largest number is: %d\n", num3);
    }
}

int main() {
    // Call the function to find the largest number
    findLargest();
    return 0;  // Exit the program
}
