#include <stdio.h>

// Recursive function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    // Base case: If the number has only one digit
    if (num < 10) {
        return num;
    }
    // Recursive step: Calculate sum of digits of remaining number
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int number,sum;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits using recursion
    sum = sumOfDigits(number);

    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
