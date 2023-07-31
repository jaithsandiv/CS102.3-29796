#include <stdio.h>

int main() {
   int opt;
   float r,c,a,v,pi;

    printf("------------------\n");
    printf("Calculator\n");
    printf("------------------\n");
    printf("1-Circumference\n");
    printf("2-Area\n");
    printf("3-Volume\n");
    printf("------------------\n");
    printf("Select Operator: ");
    scanf("%d",&opt);
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    pi=3.142;
    switch(opt) {
        case 1:
            c=2*pi*r;
            printf("Circumference = %.2f",c);
            break;
        case 2:
            a=pi*r*r;
            printf("Area = %.2f",a);
            break;
        case 3:
            v=(4/3)*pi*r*r*r;
            printf("Output = %.2f",v);
            break;
    }
}
