#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};
void add_employee(struct Employee roster[], int *emp_count);
void view_employees(struct Employee roster[], int emp_count);
int main() {
    struct Employee roster[50];
    int emp_count = 0;
    int choice;
    printf("WELCOME TO THE MINI EMPLOYEE MANAGEMENT SYSTEM\n");
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. ADD EMPLOYEE\n");
        printf("2. VIEW EMPLOYEES\n");
        printf("3. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_employee(roster, &emp_count);
        } else if (choice == 2) {
            view_employees(roster, emp_count);
        } else if (choice == 3) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! TRY AGAIN.\n");}}
    return 0;}
void add_employee(struct Employee roster[], int *emp_count) {
    if (*emp_count >= 50) {
        printf("\nROSTER IS FULL!\n");
        return;}
    printf("\n--- ADD NEW EMPLOYEE ---\n");
    roster[*emp_count].id = 1001 + *emp_count;
    getchar(); 
    printf("Enter Employee Name: ");
    fgets(roster[*emp_count].name, sizeof(roster[*emp_count].name), stdin);
    int name_len = strlen(roster[*emp_count].name);
    if (roster[*emp_count].name[name_len - 1] == '\n') {
        roster[*emp_count].name[name_len - 1] = '\0';}
    printf("Enter Designation: ");
    fgets(roster[*emp_count].designation, sizeof(roster[*emp_count].designation), stdin);
    int des_len = strlen(roster[*emp_count].designation);
    if (roster[*emp_count].designation[des_len - 1] == '\n') {
        roster[*emp_count].designation[des_len - 1] = '\0';}
    printf("Enter Monthly Salary: ");
    scanf("%f", &roster[*emp_count].salary);
    printf("EMPLOYEE ADDED SUCCESSFULLY WITH ID: %d\n", roster[*emp_count].id);
    (*emp_count)++;}
void view_employees(struct Employee roster[], int emp_count) {
    if (emp_count == 0) {
        printf("\nNO EMPLOYEES IN THE SYSTEM.\n");
        return;}
    printf("\n--- EMPLOYEE ROSTER ---\n");
    for (int i = 0; i < emp_count; i++) {
        printf("ID: %d | Name: %s | Role: %s | Salary: $%.2f\n", 
               roster[i].id, 
               roster[i].name, 
               roster[i].designation, 
               roster[i].salary);}}