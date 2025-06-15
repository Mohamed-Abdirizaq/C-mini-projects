#include <stdio.h>
//Function Declaration
int factorial(int f){
        if (f<0){
            return 0;
        }
        else if (f==0){
            return 1;
        }else{
            return f*factorial(f-1);
        }

}
int main(){
        int number;
        printf("Enter a number:");
        scanf("%d",&number);
        printf("The factorial of the number %d is %d",number, factorial(number));
    return 0;
//Stops the program
}
