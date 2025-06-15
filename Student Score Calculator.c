#include <stdio.h>

int main(){
    int total_score = 0; // Stores the sum of all students' marks
    float average_score; // Will hold the calculated average score
    int student_mark[6]; // Array to store marks for 6 students
    int student_number = 0; // (Unused) Variable, can be removed

    // Loop to input marks for each student
    for (int i = 0; i < 6; i++) {
        printf("Enter the marks for student %d: ", i + 1);
        scanf("%d\n", &student_mark[i]); // Read mark for student i
        total_score = total_score + student_mark[i]; // Add mark to total
    }

    average_score = total_score / 6.0; // Calculate average (ensure float division)

    // Display the total and average scores
    printf("The total score of the six students is %d and the average is %f", total_score, average_score);

    return 0; // End of program
}
