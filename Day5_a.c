//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main(){
    int principal, rate, time;
    printf("Enter principal amount : ");
    scanf("%d", &principal);
    printf("Enter rate of interest : ");
    scanf("%d", &rate);
    printf("Enter time period in years : ");
    scanf("%d", &time);
    int simple_interest = (principal * rate * time) / 100;
    double compound_interest = principal * pow(1 + rate / 100.0, time) - principal; 
    printf("Simple Interest = %d\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest); 
    return 0;
}