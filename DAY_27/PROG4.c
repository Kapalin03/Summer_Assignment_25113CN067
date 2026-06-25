#include <stdio.h>
struct Marksheet {
    int rollNumber;
    char name[50];
    int mathsMarks;
    int scienceMarks;
};
struct Marksheet classRecords[100];
int studentCount = 0;
void addMarksheet();
void displayMarksheets();
void searchMarksheet();
void deleteMarksheet();
void saveToFile();
void loadFromFile();
int main() {
    int choice;
    loadFromFile(); 
    while (1) {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student Marks\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll No\n");
        printf("4. Delete Marksheet Record\n");
        printf("5. Save and Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue; }
        while (getchar() != '\n'); 
        if (choice == 1) {
            addMarksheet();
        } else if (choice == 2) {
            displayMarksheets();
        } else if (choice == 3) {
            searchMarksheet();
        } else if (choice == 4) {
            deleteMarksheet();
        } else if (choice == 5) {
            saveToFile(); 
            printf("Data saved. Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");}}
    return 0;}
void addMarksheet() {
    if (studentCount < 100) {
        printf("Enter Roll Number: ");
        scanf("%d", &classRecords[studentCount].rollNumber);
        printf("Enter Name (No spaces): ");
        scanf("%s", classRecords[studentCount].name);
        printf("Enter Marks for Maths (out of 100): ");
        scanf("%d", &classRecords[studentCount].mathsMarks);
        printf("Enter Marks for Science (out of 100): ");
        scanf("%d", &classRecords[studentCount].scienceMarks);
        studentCount++; 
        printf("Marksheet record added successfully!\n");
    } else {
        printf("Database is full!\n");}}
void displayMarksheets() {
    if (studentCount == 0) {
        printf("No records found.\n");
    } else {
        printf("\n--- Generated Marksheets ---\n");
        for (int i = 0; i < studentCount; i++) {
            int total = classRecords[i].mathsMarks + classRecords[i].scienceMarks;
            float percentage = (float)total / 2.0; 
            printf("Roll No: %d, Name: %s, Maths: %d, Science: %d, Total: %d, Percentage: %.2f%%\n", 
                   classRecords[i].rollNumber, classRecords[i].name, classRecords[i].mathsMarks, classRecords[i].scienceMarks, total, percentage);}}}

void searchMarksheet() {
    int searchRoll;
    int found = 0;
    printf("Enter Roll Number to search marksheet: ");
    scanf("%d", &searchRoll);
    for (int i = 0; i < studentCount; i++) {
        if (classRecords[i].rollNumber == searchRoll) {
            int total = classRecords[i].mathsMarks + classRecords[i].scienceMarks;
            float percentage = (float)total / 2.0;
            printf("\n--- STUDENT MARKSHEET ---");
            printf("\nRoll Number : %d", classRecords[i].rollNumber);
            printf("\nName        : %s", classRecords[i].name);
            printf("\nMaths       : %d / 100", classRecords[i].mathsMarks);
            printf("\nScience     : %d / 100", classRecords[i].scienceMarks);
            printf("\n-------------------------");
            printf("\nTotal Marks : %d / 200", total);
            printf("\nPercentage  : %.2f%%\n", percentage);
            found = 1;
            break; }}
    if (found == 0) {
        printf("Marksheet record not found for this Roll Number.\n");}}
void deleteMarksheet() {
    int deleteRoll;
    int found = 0;
    printf("Enter Roll Number to delete marksheet record: ");
    scanf("%d", &deleteRoll);
    for (int i = 0; i < studentCount; i++) {
        if (classRecords[i].rollNumber == deleteRoll) {
            for (int j = i; j < studentCount - 1; j++) {
                classRecords[j] = classRecords[j + 1];}
            studentCount--; 
            printf("Marksheet record deleted successfully!\n");
            found = 1;
            break;}}
    if (found == 0) {
        printf("Marksheet record not found for this Roll Number.\n");}}
void saveToFile() {
    FILE *file = fopen("marksheets.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;}
    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%d %s %d %d\n", classRecords[i].rollNumber, classRecords[i].name, classRecords[i].mathsMarks, classRecords[i].scienceMarks);}
    fclose(file); }
void loadFromFile() {
    FILE *file = fopen("marksheets.txt", "r"); 
    if (file == NULL) {
        return;}
    studentCount = 0;
    while (studentCount < 100) {
        int roll;
        char name[50];
        int maths;
        int science;
        if (fscanf(file, "%d %s %d %d", &roll, name, &maths, &science) != 4) {
            break; }
        classRecords[studentCount].rollNumber = roll;
        for(int i = 0; name[i] != '\0'; i++) {
            classRecords[studentCount].name[i] = name[i];
            classRecords[studentCount].name[i+1] = '\0';}
        classRecords[studentCount].mathsMarks = maths;
        classRecords[studentCount].scienceMarks = science;
        studentCount++;} 
    fclose(file);}