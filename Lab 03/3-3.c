#include <stdio.h>
int main()
{
    char empname[50];
    float bsalary,nsalary,incr;

    printf("Enter Employee Name: ");
    scanf("%s",&empname);
    printf("Enter Basic Salary: ");
    scanf("%f",&bsalary);

    if(bsalary<5000)
        incr=bsalary*0.05;
    else if(bsalary>=5000 && bsalary<10000)
        incr=bsalary*0.1;
    else if(bsalary>=10000)
        incr=bsalary*0.15;
    nsalary=bsalary+incr;

    printf("Employee %s has a new salary of %.2f \n",empname,nsalary);
}
