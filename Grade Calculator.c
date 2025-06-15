#include <stdio.h>
int main(){
//Variables Declaration
    float subject1;
    float subject2;
    float subject3;
    float average;
    char grade;
    int tens;
//Prompts the user to enter the values
    printf("Enter your score in the first subject:");
//Stores the user input
    scanf("%f", &subject1);
     printf("Enter your score in the second subject:");
    scanf("%f", &subject2);
     printf("Enter your score in the third subject:");
    scanf("%f", &subject3);
//Calculates the average
    average=(subject1+subject2+subject3)/3.0;
//Leaves the cases as integers
    tens=(int)(average/10);
switch (tens){
    case 9:
    grade='A';
    break;
    case 8:
    grade='B';
    break;
    case 7:
    grade='C';
    break;
    case 6:
    grade='D';
    break;
    default:
    grade='F';
}
 printf("Your average score is :%.2f\nYour grade is :%c",average, grade);
 return 0;
}
