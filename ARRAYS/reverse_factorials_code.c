#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculate factorial
    int factorial = 1;
    int i;
    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
    printf("Factorial of %d is: %d\n", n, factorial);
    
    // Reverse the factorial
    int reverse_factorial = 0;
    while (factorial != 0) {
        reverse_factorial = reverse_factorial * 10 + factorial % 10;
        factorial /= 10;
    }
    printf("Reversed factorial: %d\n", reverse_factorial);
    
    // Ignore leading zeros
    while (reverse_factorial % 10 == 0) {
        reverse_factorial /= 10;
    }
    
    printf("Reversed factorial without leading zeros: %d\n", reverse_factorial);
    
    return 0;
}
