#include <stdio.h>
struct Payroll {
    int employeeId;
    char name[50];
    float baseSalary;
    float allowance;
};
struct Payroll payrollList[100];
int recordCount = 0;
void addSalaryRecord();
void displaySalaryRecords();
void searchSalaryRecord();
void deleteSalaryRecord();
void saveToFile();
void loadFromFile();
int main() {
    int choice;
    loadFromFile(); 
    while (1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Payroll Details\n");
        printf("3. Search Salary Record\n");
        printf("4. Delete Salary Record\n");
        printf("5. Save and Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue; }
        while (getchar() != '\n'); 
        if (choice == 1) {
            addSalaryRecord();
        } else if (choice == 2) {
            displaySalaryRecords();
        } else if (choice == 3) {
            searchSalaryRecord();
        } else if (choice == 4) {
            deleteSalaryRecord();
        } else if (choice == 5) {
            saveToFile(); 
            printf("Data saved. Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");}}
    return 0;}
void addSalaryRecord() {
    if (recordCount < 100) {
        printf("Enter Employee ID: ");
        scanf("%d", &payrollList[recordCount].employeeId);
        printf("Enter Name (No spaces): ");
        scanf("%s", payrollList[recordCount].name);
        printf("Enter Base Salary: ");
        scanf("%f", &payrollList[recordCount].baseSalary);
        printf("Enter Allowance: ");
        scanf("%f", &payrollList[recordCount].allowance);
        recordCount++; 
        printf("Salary record added successfully!\n");
    } else {
        printf("Database is full!\n");}}
void displaySalaryRecords() {
    if (recordCount == 0) {
        printf("No records found.\n");
    } else {
        printf("\n--- Payroll Details List ---\n");
        for (int i = 0; i < recordCount; i++) {
            // Process calculations dynamically on display
            float totalSalary = payrollList[i].baseSalary + payrollList[i].allowance;
            printf("ID: %d, Name: %s, Base: $%.2f, Allowance: $%.2f, Total Salary: $%.2f\n", 
                   payrollList[i].employeeId, payrollList[i].name, payrollList[i].baseSalary, payrollList[i].allowance, totalSalary);}}}
void searchSalaryRecord() {
    int searchId;
    int found = 0;
    printf("Enter Employee ID to search salary details: ");
    scanf("%d", &searchId); 
    for (int i = 0; i < recordCount; i++) {
        if (payrollList[i].employeeId == searchId) {
            float totalSalary = payrollList[i].baseSalary + payrollList[i].allowance;
            printf("Found!\nName: %s\nBase Salary: $%.2f\nAllowance: $%.2f\nTotal Salary: $%.2f\n", 
                   payrollList[i].name, payrollList[i].baseSalary, payrollList[i].allowance, totalSalary);
            found = 1;
            break; }}
    if (found == 0) {
        printf("Salary record not found for this ID.\n");}}
void deleteSalaryRecord() {
    int deleteId;
    int found = 0;
    printf("Enter Employee ID to delete salary record: ");
    scanf("%d", &deleteId);
    for (int i = 0; i < recordCount; i++) {
        if (payrollList[i].employeeId == deleteId) {
            for (int j = i; j < recordCount - 1; j++) {
                payrollList[j] = payrollList[j + 1];}
            recordCount--; 
            printf("Salary record deleted successfully!\n");
            found = 1;
            break;}}
    if (found == 0) {
        printf("Salary record not found for this ID.\n");}}
void saveToFile() {
    FILE *file = fopen("salary_records.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;}
    for (int i = 0; i < recordCount; i++) {
        fprintf(file, "%d %s %.2f %.2f\n", payrollList[i].employeeId, payrollList[i].name, payrollList[i].baseSalary, payrollList[i].allowance);}
    fclose(file); }
void loadFromFile() {
    FILE *file = fopen("salary_records.txt", "r"); 
    if (file == NULL) {
        return;}
    recordCount = 0;
    while (recordCount < 100) {
        int id;
        char name[50];
        float base;
        float allow;
        if (fscanf(file, "%d %s %f %f", &id, name, &base, &allow) != 4) {
            break; }
        payrollList[recordCount].employeeId = id;
        for(int i = 0; name[i] != '\0'; i++) {
            payrollList[recordCount].name[i] = name[i];
            payrollList[recordCount].name[i+1] = '\0';}
        payrollList[recordCount].baseSalary = base;
        payrollList[recordCount].allowance = allow;
        recordCount++;} 
    fclose(file);}