#include <stdio.h>
//function definition
int fibonacci_sequence(int n){
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int sequence=fibonacci_sequence(n-1)+fibonacci_sequence(n-2);
//store the sequence
        return sequence;
    }
}
int main(){
    int n;
//prompts the user to enter the value
    printf("Enter the value of n (n>=2):");
//reads the input
    scanf("%d",&n);
    if (n<2){
        printf("Enter a value that obeys the rules above!");
    }
     printf("The Fibonacci sequence for n is %d:", n);
    for (int i = 0; i < n; i++) {
//prints the output
        printf("%d ", fibonacci_sequence(i));
    }
    return 0;
//stops the program
}
