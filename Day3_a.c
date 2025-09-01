//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
    int celcius;
    printf("Enter the temperature in Celcius : ");
    scanf("%d", &celcius);
    printf("Temprature in Fahrenheit = %d\n", (celcius*9/5)+32);
    return 0;
}