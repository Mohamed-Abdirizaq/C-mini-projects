#include <stdio.h>
int main(){
    float income;
    float tax;
    float net_income;
    //Declares the variables
    printf("Enter your annual income in dollars:");
    //Prompts the user to enter data
    scanf("%f", &income);
    //Captures the users input

    if (income<=10000){
        tax=0;
    }else if (income<=30000){
        tax=0.1*income;
    }else if (income<=50000){
        tax=0.2*income;
    }else if (income>50000){
        tax=0.3*income;
    }
    net_income=income-tax;
    //Calculates the user income
    printf("Your tax is:%.2f and your net income after tax is %.2f", tax, net_income);
    //Outputs the tax and Net income
    return 0;
    //Stops the program
}
