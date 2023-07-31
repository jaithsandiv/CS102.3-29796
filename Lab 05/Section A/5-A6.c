#include <stdio.h>
int main() {
    int base, exponent, result = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        printf("Result: %d\n", result);
    } else {
        printf("Invalid exponent. Exponent must be non-negative.\n");
    }
}
