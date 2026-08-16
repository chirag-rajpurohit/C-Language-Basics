#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers\n ");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    // --- Swap using third variable ---
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping with third variable:\n");
    printf("a = %d, b = %d\n", a, b);

    // Reset values for next method
     printf("Enter two numbers\n ");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    // --- Swap without third variable ---
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping without third variable:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
