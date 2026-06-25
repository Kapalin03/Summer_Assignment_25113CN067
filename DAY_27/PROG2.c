#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
struct Employee company[100];
int employeeCount = 0;
void addEmployee();
void displayEmployees();
void searchEmployee();
void deleteEmployee();
void saveToFile();
void loadFromFile();
int main() {
    int choice;
    loadFromFile(); 
    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Save and Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;}
        while (getchar() != '\n'); 
        if (choice == 1) {
            addEmployee();
        } else if (choice == 2) {
            displayEmployees();
        } else if (choice == 3) {
            searchEmployee();
        } else if (choice == 4) {
            deleteEmployee();
        } else if (choice == 5) {
            saveToFile(); 
            printf("Data saved. Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");}}
    return 0;}
void addEmployee() {
    if (employeeCount < 100) {
        printf("Enter Employee ID: ");
        scanf("%d", &company[employeeCount].id);
        printf("Enter Name (No spaces): ");
        scanf("%s", company[employeeCount].name);
        printf("Enter Salary: ");
        scanf("%f", &company[employeeCount].salary);
        employeeCount++; 
        printf("Employee added successfully!\n");}
        else {
        printf("Database is full!\n");}}
void displayEmployees() {
    if (employeeCount == 0) {
        printf("No records found.\n");
    } else {
        printf("\n--- Employee List ---\n");
        for (int i = 0; i < employeeCount; i++) {
            printf("ID: %d, Name: %s, Salary: $%.2f\n", company[i].id, company[i].name, company[i].salary);}}}
void searchEmployee() {
    int searchId;
    int found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);    
    for (int i = 0; i < employeeCount; i++) {
        if (company[i].id == searchId) {
            printf("Found! Name: %s, Salary: $%.2f\n", company[i].name, company[i].salary);
            found = 1;
            break; }}
    if (found == 0) {
        printf("Employee not found.\n");}}
void deleteEmployee() {
    int deleteId;
    int found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &deleteId);
    for (int i = 0; i < employeeCount; i++) {
        if (company[i].id == deleteId) {
            for (int j = i; j < employeeCount - 1; j++) {
                company[j] = company[j + 1];}
            employeeCount--; 
            printf("Employee deleted successfully!\n");
            found = 1;
            break;}}
    if (found == 0) {
        printf("Employee not found.\n");}}
void saveToFile() {
    FILE *file = fopen("employees.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;}
    for (int i = 0; i < employeeCount; i++) {
        fprintf(file, "%d %s %.2f\n", company[i].id, company[i].name, company[i].salary);
    }
    fclose(file); }
void loadFromFile() {
    FILE *file = fopen("employees.txt", "r"); 
    if (file == NULL) {
        return;}
    employeeCount = 0;
    while (employeeCount < 100) {
        int id;
        char name[50];
        float salary;
        if (fscanf(file, "%d %s %f", &id, name, &salary) != 3) {
            break; }
        company[employeeCount].id = id;
        for(int i = 0; name[i] != '\0'; i++) {
            company[employeeCount].name[i] = name[i];
            company[employeeCount].name[i+1] = '\0';}
        company[employeeCount].salary = salary;
        employeeCount++;} 
    fclose(file);}