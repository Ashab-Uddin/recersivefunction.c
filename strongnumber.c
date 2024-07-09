#include <stdio.h>

// Function to check if a number is strong or not
int Strong(int num) {
    int originalNum = num;
    int sum = 0;
    
    // Calculate sum of factorials of digits
    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    
    // Check if the sum of factorials is equal to the original number
    if (sum == originalNum) {
        return 1; // True: Number is strong
    } else {
        return 0; // False: Number is not strong
    }
}

int main() {
    int lowerLimit, upperLimit;
    
    // Input lower and upper limits of the interval
    printf("Enter the lower limit of the interval: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit of the interval: ");
    scanf("%d", &upperLimit);
    
    printf("Strong numbers between %d and %d are:\n", lowerLimit, upperLimit);
    
    // Iterate through the interval and check for strong numbers
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (Strong(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
