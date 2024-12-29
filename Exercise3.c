#include <stdio.h>

int main() {
    int nums[10], i, j, temp;

    // Ask the user to enter 10 numbers
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    // Sort the numbers using selection sort
    for(i = 0; i < 9; i++) {  // Loop through each number
        for(j = i + 1; j < 10; j++) {  // Compare it with the rest
            if(nums[i] > nums[j]) {  // If the current number is bigger
                // Swap the numbers
                temp = nums[i];  // Save the current number temporarily
                nums[i] = nums[j];  // Put the smaller one in the current spot
                nums[j] = temp;  // Move the original larger one to the second spot
            }
        }
    }

    // Display the sorted numbers
    printf("Sorted numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);  // Print each number on a new line
    }

    return 0;  // End the program
}
