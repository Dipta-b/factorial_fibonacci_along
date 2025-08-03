#include <stdio.h>

int fibonacci(int i)
{
    if (i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int choice;
    printf("Choose an option:\n");
    printf("1. Fibonacci Series\n");
    printf("2. Factorial\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int n;
        printf("Enter the range for Fibonacci series: ");
        scanf("%d", &n);

        printf("Fibonacci Series: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    else if (choice == 2)
    {
        int num;
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Factorial is not defined for negative numbers.\n");
        }
        else
        {
            printf("Factorial of %d is %d\n", num, factorial(num));
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}