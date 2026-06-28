#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Account {
    int account_number;
    char name[50];
    float balance;
};
void create_account(struct Account bank[], int *account_count);
void deposit_money(struct Account bank[], int account_count);
void withdraw_money(struct Account bank[], int account_count);
void display_account(struct Account bank[], int account_count);
int main() {
    struct Account bank[100];
    int account_count = 0;
    int choice;
    printf("WELCOME TO THE BANK ACCOUNT SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. CREATE NEW ACCOUNT\n");
        printf("2. DEPOSIT MONEY\n");
        printf("3. WITHDRAW MONEY\n");
        printf("4. DISPLAY ACCOUNT DETAILS\n");
        printf("5. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            create_account(bank, &account_count);
        } else if (choice == 2) {
            deposit_money(bank, account_count);
        } else if (choice == 3) {
            withdraw_money(bank, account_count);
        } else if (choice == 4) {
            display_account(bank, account_count);
        } else if (choice == 5) {
            printf("EXITING SYSTEM... THANK YOU FOR BANKING WITH US!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void create_account(struct Account bank[], int *account_count) {
    printf("\n--- CREATE ACCOUNT ---\n");
    bank[*account_count].account_number = 1001 + *account_count;
    getchar(); 
    printf("Enter Account Holder Name: ");
    fgets(bank[*account_count].name, sizeof(bank[*account_count].name), stdin);
    int len = strlen(bank[*account_count].name);
    if (bank[*account_count].name[len - 1] == '\n') {
        bank[*account_count].name[len - 1] = '\0';}
    printf("Enter Initial Deposit Amount: ");
    scanf("%f", &bank[*account_count].balance);
    printf("ACCOUNT CREATED SUCCESSFULLY!!!\n");
    printf("YOUR ACCOUNT NUMBER IS: %d\n", bank[*account_count].account_number);
    (*account_count)++;}
void deposit_money(struct Account bank[], int account_count) {
    if (account_count == 0) {
        printf("\nNO ACCOUNTS EXIST IN THE SYSTEM.\n");
        return;}
    int target_acc;
    float amount;
    int found = 0;
    printf("\nEnter Account Number: ");
    scanf("%d", &target_acc);
    for (int i = 0; i < account_count; i++) {
        if (bank[i].account_number == target_acc) {
            found = 1;
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("INVALID AMOUNT!!!\n");
            } else {
                bank[i].balance += amount;
                printf("DEPOSIT SUCCESSFUL!!! NEW BALANCE: %.2f\n", bank[i].balance);}
            break;}}
    if (found == 0) {
        printf("ACCOUNT NUMBER NOT FOUND!!!\n");}}
void withdraw_money(struct Account bank[], int account_count) {
    if (account_count == 0) {
        printf("\nNO ACCOUNTS EXIST IN THE SYSTEM.\n");
        return;}
    int target_acc;
    float amount;
    int found = 0;
    printf("\nEnter Account Number: ");
    scanf("%d", &target_acc);
    for (int i = 0; i < account_count; i++) {
        if (bank[i].account_number == target_acc) {
            found = 1;
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("INVALID AMOUNT!!!\n");
            } else if (amount > bank[i].balance) {
                printf("INSUFFICIENT BALANCE!!! CURRENT BALANCE: %.2f\n", bank[i].balance);
            } else {
                bank[i].balance -= amount;
                printf("WITHDRAWAL SUCCESSFUL!!! NEW BALANCE: %.2f\n", bank[i].balance);}
            break;}}
    if (found == 0) {
        printf("ACCOUNT NUMBER NOT FOUND!!!\n");}}
void display_account(struct Account bank[], int account_count) {
    if (account_count == 0) {
        printf("\nNO ACCOUNTS EXIST IN THE SYSTEM.\n");
        return;}
    int target_acc;
    int found = 0;
    printf("\nEnter Account Number: ");
    scanf("%d", &target_acc);
    for (int i = 0; i < account_count; i++) {
        if (bank[i].account_number == target_acc) {
            found = 1;
            printf("\n--- ACCOUNT DETAILS ---\n");
            printf("Account Number: %d\n", bank[i].account_number);
            printf("Account Holder: %s\n", bank[i].name);
            printf("Current Balance: %.2f\n", bank[i].balance);
            break;}}
    if (found == 0) {
        printf("ACCOUNT NUMBER NOT FOUND!!!\n");}}