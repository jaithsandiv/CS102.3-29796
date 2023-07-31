#include<stdio.h>
int main()
{
    int number,i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial = i*factorial;
    }

    printf("Factorial of %d = %d\n", number, factorial);
}
