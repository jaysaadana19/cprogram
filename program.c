#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}
