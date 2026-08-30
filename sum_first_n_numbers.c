#include <stdio.h>

int main() {
    int n, sum;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Formula for sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // Output result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
