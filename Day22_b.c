//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, numerator, denominator;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // First term is always 1
    sum = 1.0;

    // Remaining terms
    for (int i = 1; i < n; i++) {
        numerator = 2 * i + 1;
        denominator = 2 * i + 2;
        sum += (float)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}