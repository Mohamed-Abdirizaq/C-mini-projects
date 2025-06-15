#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
//Function Definition
void addProduct(char productNames[][50], int quantities[], int *count) {
    char name[50];
    int quantity;

    printf("Enter product name: ");
    scanf("%s", name);
    printf("Enter quantity to add: ");
    scanf("%d", &quantity);
    for (int i = 0; i < *count; i++) {
        if (strcmp(productNames[i], name) == 0) {
            quantities[i] += quantity;
            printf("Updated %s quantity to %d.\n", name, quantities[i]);
            return;
        }
    }

    //Product Addition
    if (*count < MAX_PRODUCTS) {
        strcpy(productNames[*count], name);
        quantities[*count] = quantity;
        (*count)++;
        printf("Added %s with quantity %d.\n", name, quantity);
    } else {
        printf("Inventory is full. Cannot add more products.\n");
    }
}
//Function Definition
void sellProduct(char productNames[][50], int quantities[], int count) {
    char name[50];
    int quantity;
    printf("Enter product name to sell: ");
    scanf("%s", name);
    printf("Enter quantity to sell: ");
    scanf("%d", &quantity);
    for (int i = 0; i < count; i++) {
        if (strcmp(productNames[i], name) == 0) {
            if (quantities[i] >= quantity) {
                quantities[i] -= quantity;
                printf("Sold %d of %s. Remaining quantity: %d.\n", quantity, name, quantities[i]);
            } else {
                printf("Insufficient stock of %s. Available quantity: %d.\n", name, quantities[i]);
            }
            return;
        }
    }
    printf("Product %s not found in inventory.\n", name);
}
//Function Definition
void checkInventory(char productNames[][50], int quantities[], int count) {
    printf("\nCurrent Inventory:\n");
    for (int i = 0; i < count; i++) {
        if (quantities[i] > 0) {
            printf("%s: %d\n", productNames[i], quantities[i]);
        } else {
            printf("%s: Out of stock\n", productNames[i]);
        }
    }
}
int main() {
    char productNames[MAX_PRODUCTS][50];
    int quantities[MAX_PRODUCTS];
    int count = 0;
    int choice;
        do {
        printf("\nInventory Management System:\n");
        printf("1. Add Product\n");
        printf("2. Sell Product\n");
        printf("3. Check Inventory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
                switch (choice) {
            case 1:
                addProduct(productNames, quantities, &count);
                break;
            case 2:
                sellProduct(productNames, quantities, count);
                break;
            case 3:
                checkInventory(productNames, quantities, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);
//Stops the program
    return 0;
}
