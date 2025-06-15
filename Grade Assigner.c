#include <stdio.h>

int main(){
    float student_score; // Variable to store the student's exam score
    char grade; // Variable to store the assigned letter grade

    // Prompt the user to enter their exam score
    printf("Enter your exam score(a number between 0 and 100):");
    scanf("%f", &student_score); // Read the user's input and store it in student_score

    // Determine the letter grade based on the score
    if (student_score >= 90) {
        grade = 'A'; // Assign grade A for scores 90 and above
    } else if (student_score >= 80) {
        grade = 'B'; // Assign grade B for scores 80-89
    } else if (student_score >= 70) {
        grade = 'C'; // Assign grade C for scores 70-79
    } else if (student_score >= 60) {
        grade = 'D'; // Assign grade D for scores 60-69
    } else {
        grade = 'F'; // Assign grade F for scores below 60
    }

    // Output the student's score and corresponding grade
    printf("With a score of :%.2f , Your grade is %c", student_score, grade);

    return 0; // End of program
}
