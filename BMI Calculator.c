#include <stdio.h>
int main(){
//Variables Declaration
    float height;
    float weight;
    float heights;
    float BMI;
//Prompts the user to enter the data
    printf("Enter your height in meters:");
//Reads user input
    scanf("%f",&height);
    printf("Enter your weight kilograms:");
    scanf("%f",&weight);
//Calculates height squared
    heights=height*height;
//Calculates the BMI
    BMI=weight/heights;
    if (BMI<18.5){
        printf("Your BMI is %f . You are classified as Underweight",BMI);
    }else if (BMI<24.9)
    {
        printf("Your BMI is %f . You are classified as Normal weight",BMI);
    }else if (BMI<29.9){
        printf("Your BMI is %f . You are classified as Overweight",BMI);
    }else if(BMI>30)
    {
        printf("Your BMI is %f . You are classified as Obese",BMI);
    }else{
    printf("Enter valid data");}
    return 0;
//Stops the program

}
