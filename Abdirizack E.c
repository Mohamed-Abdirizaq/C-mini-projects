#include <stdio.h>

int main() {
    float income;      // Variable to store the user's annual income
    float tax;         // Variable to store the calculated tax
    float net_income;  // Variable to store the net income after tax

    // Prompt the user to enter their annual income
    printf("Enter your annual income in dollars:");
    scanf("%f", &income); // Read the user's input

    // Calculate tax based on income brackets
    if (income <= 10000) {
        tax = 0; // No tax for income up to $10,000
    }
    else if (income <= 30000) {
        tax = 0.1 * income; // 10% tax for income between $10,001 and $30,000
    }
    else if (income <= 50000) {
        tax = 0.2 * income; // 20% tax for income between $30,001 and $50,000
    }
    else if (income > 50000) {
        tax = 0.3 * income; // 30% tax for income above $50,000
    }

    net_income = income - tax; // Calculate net income after tax

    // Output the calculated tax and net income
    printf("Your tax is: %.2f and your net income after tax is %.2f", tax, net_income);

    return 0; // End of program
}