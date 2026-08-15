#include <stdio.h>
int main()
{
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);

    printf("enter second number : ");
    scanf("%d", &b);

    printf("addition = %d \n", a + b);
    printf("subtraction = %d \n", a - b);
    printf("multiplication = %d \n", a * b);
    printf("divide = %d \n", a / b); 
    printf("modules = %d\n ", a % b);

    return 0;
}