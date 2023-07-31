#include <stdio.h>
int main() {
    int count = 0;
    int empNo, basicSal;

    while(1)
        {
            printf("Enter Employee Number:");
            scanf("%d", &empNo);
        if (empNo == -999)
        {
            break;
        }

        printf("Enter Basic Salary:");
        scanf("%d", &basicSal);
        if (basicSal >= 5000)
        {
            ++count;
        }
    }
    printf("Number of Employees with a Salary >= 5000: %d\n", count);
}
