#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("\nSum of squares: %d\n", sum);
    return 0;
}