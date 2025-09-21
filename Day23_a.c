//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, numerator, denominator;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop through each term
    for (int i = 0; i < n; i++) {
        numerator = 2 * (i + 1);
        denominator = 4 * i + 3;
        sum += (float)numerator / denominator;
    }

    printf("Approximate sum : %.2f\n", sum);
    return 0;
}