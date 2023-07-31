#include <stdio.h>
int main() {
    int n = 10;
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}
