#include <stdio.h>
#include <stdlib.h>
int main(){
//Variable declaration
    int number, guess, attempts = 0;
    number =rand() % 100 + 1;
     while (guess!=number){
    printf("Guess a number between 1 and 100:");
    scanf("%d",&guess);
if (guess>number){
    printf("Too high! Try again");
}else if (guess<number)
{
    printf("Too lOw! Try again");
}else if (guess==number){
    printf("Congratulations! You guessed the correct number");
}

    }
   return 0;
//Stops the program
}
