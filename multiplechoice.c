#include <stdio.h>
int main() {
//VAriable Declaration
    int score = 0;
    int answer;

        printf("Welcome to the Quiz!\n\n");

// Question 1
    printf("Question 1: What is the premier league  all time top scorer?\n");
    printf("1. Sergio Aguero\n");
    printf("2. Harry Kane\n");
    printf("3. Allan Shearer\n");
    printf("4. Thiery Henry\n");
    printf("Choose one (1-4): \n");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

// Question 2
    printf("\nQuestion 2: Which of the following midfielders have no Ballon d'Or?\n");
    printf("1. Zidane\n");
    printf("2. Xavi\n");
    printf("3. Modric\n");
    printf("4. Rodri\n");
    printf("Choose one (1-4): \n");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

// Question 3
    printf("\nQuestion 3: Which team won the premier league in 2013?\n");
    printf("1. Chelsea\n");
    printf("2. Arsenal\n");
    printf("3. Man City\n");
    printf("4. Man United\n");
    printf("Choose one(1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

// Question 4
    printf("\nQuestion 4: Which player has the most golden boots?\n");
    printf("1. Ronaldo Nazario\n");
    printf("2. Luis Suarez\n");
    printf("3. Christiano Ronaldo\n");
    printf("4. Lionel Messi\n");
    printf("Choose one (1-4): ");
    scanf("%d", &answer);
    if (answer == 4) {
        score++;
    }

// Question 5
     printf("\nQuestion 4: Which player won the puskas award with a goal that was not the goal of the month?\n");
    printf("1. Christano Ronaldo\n");
    printf("2. Lionel Messi\n");
    printf("3. Olivier Giroud\n");
    printf("4. Mohamed Sallah\n");
    printf("Choose one (1-4): ");
    scanf("%d", &answer);
    if (answer == 4) {
        score++;
    }

    char grade;
    switch (score) {
        case 5:
            grade = 'A';
            break;
        case 4:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 2:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

// Display results
    printf("\nYour score is %d out of 5. Your grade is %c.\n", score, grade);
//Stops the program
    return 0;
}
