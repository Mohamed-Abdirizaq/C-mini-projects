#include <stdio.h>
int main(){
    float monthly_savings;
    int months;
    float total_savings;
    //Initializing the variables
    printf("Enter your monthly savings:");
    //Prompt the user to enter the monthly savings
    scanf("%f",&monthly_savings);
    //Captures the user input
    printf("How long do you plan saving for:");
    //Prompts the user
    scanf("%d",&months);
    //Captures the input
    total_savings=monthly_savings*months;
    //Calculates the total savings
    printf("You save %.2f per month. After %d months, you will have saved a total of %.2f", monthly_savings, months, total_savings);
    //Gives the user the output
    return 0;
    //Stops the program

}
