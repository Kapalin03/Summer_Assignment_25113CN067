#include <stdio.h>
#include <stdlib.h>
void add_numbers();
void subtract_numbers();
void multiply_numbers();
void divide_numbers();
int main() {
    int choice;
    printf("WELCOME TO THE MENU-DRIVEN CALCULATOR\n");
    while (1) {
        printf("\n--- CALCULATOR MENU ---\n");
        printf("1. ADDITION (+)\n");
        printf("2. SUBTRACTION (-)\n");
        printf("3. MULTIPLICATION (*)\n");
        printf("4. DIVISION (/)\n");
        printf("5. EXIT CALCULATOR\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_numbers();
        } else if (choice == 2) {
            subtract_numbers();
        } else if (choice == 3) {
            multiply_numbers();
        } else if (choice == 4) {
            divide_numbers();
        } else if (choice == 5) {
            printf("EXITING CALCULATOR... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void add_numbers() {
    float num1, num2;
    printf("\n--- ADDITION ---\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("RESULT: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);}
void subtract_numbers() {
    float num1, num2;
    printf("\n--- SUBTRACTION ---\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("RESULT: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);}
void multiply_numbers() {
    float num1, num2;
    printf("\n--- MULTIPLICATION ---\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("RESULT: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);}
void divide_numbers() {
    float num1, num2;
    printf("\n--- DIVISION ---\n");
    printf("Enter dividend (number to divide): ");
    scanf("%f", &num1);
    printf("Enter divisor (number to divide by): ");
    scanf("%f", &num2);
    if (num2 == 0) {
        printf("ERROR!!! DIVISION BY ZERO IS NOT ALLOWED.\n");
    } else {
        printf("RESULT: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);}}