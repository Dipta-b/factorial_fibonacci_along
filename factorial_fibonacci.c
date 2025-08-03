
#include <stdio.h>
//..........factorial.....
int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else
        return i * factorial(i - 1);
}
// fibonacci
int fibonacci(int i)
{
    if (i == 0 || i == 1)
    {
        return i;
    }
    else
        return fibonacci(i - 1) + fibonacci(i - 2);
}
int main()
{
    int choice;
    printf("Choose an option:\n");
    printf("1. Factorial Series\n");
    printf("2. Fibonacci\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int num;
        printf("Enter a positive number :");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Not valid");
        }
        else
        {
            printf("Factorial of %d is %d ", num, factorial(num));
        }
    }
    else if (choice == 2)
    {

        int s;
        printf("Enter the range for Fibonacci series: ");
        scanf("%d", &s);
        for (int i = 0; i < s; i++)
        {
            int result = fibonacci(i);
            printf("%d ", result);
        }
    }

    return 0;
}
