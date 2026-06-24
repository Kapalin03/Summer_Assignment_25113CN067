#include <stdio.h>
void checkbalance(int list[5][2], int index);
void depositmoney(int list[5][2], int index);
void takemoney(int list[5][2], int index);
int main() {
    int list[5][2] = {{1, 99800},{2, 76500},{3, 45677},{4, 23456},{5, 24453}};
    int ano;
    printf("Enter the last four digits of your account number: ");
    scanf("%d", &ano);
    int s = 1;
    int index = -1; 
    for(int i = 0; i < 5; i++) {
        if(ano == list[i][0]) { 
            printf("ACCOUNT FOUND.\n");
            s = 0;
            index = i; 
            break;}}
    if(s == 1) {
        printf("ACCOUNT NOT FOUND.\n");
        return 0;} 
    int choice;
    while(1) {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money (Take Money)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            checkbalance(list, index);} 
        else if (choice == 2) {
            depositmoney(list, index);} 
        else if (choice == 3) {
            takemoney(list, index);} 
        else if (choice == 4) {
            printf("Thank you for using our ATM. Goodbye!\n");
            break; } 
        else {
            printf("Invalid choice! Please try again.\n");}}
    return 0;}
void checkbalance(int list[5][2], int index) {
    printf("\nYour current balance is: Rs. %d\n", list[index][1]);
}
void depositmoney(int list[5][2], int index) {
    int amount;
    printf("\nEnter amount to deposit: ");
    scanf("%d", &amount);
    if (amount > 0) {
        list[index][1] += amount;
        printf("Rs. %d deposited successfully.\n", amount);
        printf("New Balance: Rs. %d\n", list[index][1]);
    } else {
        printf("Invalid amount!\n");}}
void takemoney(int list[5][2], int index) {
    int amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%d", &amount);
    if (amount > list[index][1]) {
        printf("Insufficient balance! Transaction failed.\n");
    } else if (amount <= 0) {
        printf("Invalid amount!\n");
    } else {
        list[index][1] -= amount; 
        printf("Please collect your cash: Rs. %d\n", amount);
        printf("Remaining Balance: Rs. %d\n", list[index][1]);}}