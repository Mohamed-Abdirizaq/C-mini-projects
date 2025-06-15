#include <stdio.h>
//Function Definition
const char* prime_number(int num){
    int divisor=2;
    if (num<1){
            return "not a prime number";
    }
       for (int divisor = 2; divisor <= 0.5*(num); divisor++) {
        if (num % divisor == 0) {
            return "not a Prime Number";
        }
    }


    return "a Prime Number.";

    }
int main(){
    int num;
//Prompts the user
    printf("Enter a positive integer");
//Reads user input
    scanf("%d", &num);
    printf("The number you entered is %s",prime_number(num));
//Stops the program
    return 0;
}
