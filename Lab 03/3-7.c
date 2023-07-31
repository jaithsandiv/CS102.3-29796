#include <stdio.h>
int main()
{
    int yearsOfService, monthlySales;
    char city;
    float basicSalary, additionalAllowance = 0, bonus = 0, grossRemuneration;

    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the number of years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the monthly sales amount: ");
    scanf("%d", &monthlySales);

    printf("Enter the city ('C' for Colombo, 'O' for other cities): ");
    scanf(" %c", &city);

    // Calculate additional allowance for years of service
    if (yearsOfService > 5) {
        additionalAllowance = 0.1 * basicSalary;
    }

    // Calculate additional allowance for city
    if (city == 'C') {
        additionalAllowance += 2500;
    }

    // Calculate bonus based on monthly sales
    if (monthlySales >= 0 && monthlySales <= 25000) {
        bonus = 0.1 * monthlySales;
    } else if (monthlySales > 25000 && monthlySales < 50000) {
        bonus = 0.12 * monthlySales;
    } else if (monthlySales >=50000) {
        bonus = 0.15 * monthlySales;
    }

    // Calculate gross remuneration
    grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("\nGross Monthly Remuneration: %.2f\n", grossRemuneration);
}
