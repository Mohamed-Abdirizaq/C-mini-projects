#include <stdio.h>

int main(){
    int day; // Variable to store the user's input for the day number

    // Prompt the user to enter a number between 1 and 7
    printf("Enter a number (1-7)");
    scanf("%d", &day); // Read the user's input

    // Determine the day of the week based on the input number
    switch (day) {
        case 1:
            printf("The day is Monday");
            break;
        case 2:
            printf("The day is Tuesday");
            break;
        case 3:
            printf("The day is Wednesday");
            break;
        case 4:
            printf("The day is Thursday");
            break;
        case 5:
            printf("The day is Friday");
            break;
        case 6:
            printf("The day is Saturday");
            break;
        case 7:
            printf("The day is Sunday");
            break;
        default:
            // Output message for invalid input (not in the range 1-7)
            printf("Invalid input");
    }

    return 0; // End of program
}
