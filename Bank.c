# include <stdio.h>
int main(){
//Variable Declaration and initialization
    float balance=0;
    int choice;
    float deposit;
    float withdrawal;


    do
    {
    printf("Welcome to our bank\n");
    printf("Select one option\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Check Balance\n");
    printf("4.Exit\n");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the ammount of money you want to deposit:");
            scanf("%f",&deposit);
            balance=balance+deposit;
            break;
        case 2:
            printf("\nEnter the ammount of money you want to withdraw:");
            scanf("%f", &withdrawal);
            if (withdrawal>balance){
                printf("Withdrawal should not exceed balance!");
            }else {
                balance=balance-withdrawal;
            }
            break;
        case 3:
            printf("Your balance is %f",balance);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice !=4);
    return 0;
//stops the program
}
