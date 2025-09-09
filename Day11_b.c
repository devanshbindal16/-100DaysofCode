//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h> 

int main() {
    int cost_price, selling_price;
    printf("Enter the Cost price of the item : ");
    scanf("%d", &cost_price);
    printf("Enter the Selling price of the item : ");
    scanf("%d", &selling_price);

    if (cost_price > selling_price) {
        float loss = cost_price - selling_price;
        float loss_percentage = (loss / cost_price) * 100;
        printf("Loss percentage of the item is : %.2f\n", loss_percentage);
    } else if (cost_price < selling_price) {
        float profit = selling_price - cost_price;
        float profit_percentage = (profit / cost_price) * 100;
        printf("Profit percentage of the item is : %.2f\n", profit_percentage);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
