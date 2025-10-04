#include <stdio.h>

int main() {
    int n;
    long long Part1 = 1, Part2 = 1, Part3 = 1, C;

    printf("Enter n: ");
    scanf("%d", &n);

    // Part1 = (2n)!
    for (int i = 1; i <= 2 * n; i++) {
        Part1 *= i;
    }

    // Part2 = (n+1)!
    for (int i = 1; i <= n + 1; i++) {
        Part2 *= i;
    }

    // Part3 = n!
    for (int i = 1; i <= n; i++) {
        Part3 *= i;
    }

    // Catalan Formula: (2n)! / ((n+1)! * n!)
    C = Part1 / (Part2 * Part3);

    printf("Catalan number C_%d = %lld\n", n, C);

    return 0;
}
