#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float gpa;
};
struct Student school[100];
int studentCount = 0;
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();
int main() {
    int choice;
    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            displayStudents();
        } else if (choice == 3) {
            searchStudent();
        } else if (choice == 4) {
            deleteStudent();
        } else if (choice == 5) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;}
void addStudent() {
    if (studentCount < 100) {
        printf("Enter ID: ");
        scanf("%d", &school[studentCount].id);        
        printf("Enter Name (No spaces): ");
        scanf("%s", school[studentCount].name);
        printf("Enter GPA: ");
        scanf("%f", &school[studentCount].gpa);
        studentCount++; 
        printf("Student added successfully!\n");
    } else {
        printf("Database is full!\n");}}
void displayStudents() {
    if (studentCount == 0) {
        printf("No records found.\n");
    } else {
        printf("\n--- Student List ---\n");
        for (int i = 0; i < studentCount; i++) {
            printf("ID: %d, Name: %s, GPA: %.2f\n", school[i].id, school[i].name, school[i].gpa);}}}
void searchStudent() {
    int searchId,found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchId);
    for (int i = 0; i < studentCount; i++) {
        if (school[i].id == searchId) {
            printf("Found! Name: %s, GPA: %.2f\n", school[i].name, school[i].gpa);
            found = 1;
            break; }}
    if (found == 0) {
        printf("Student not found.\n");}}
void deleteStudent() {
    int deleteId,found = 0;
    printf("Enter ID to delete: ");
    scanf("%d", &deleteId);
    for (int i = 0; i < studentCount; i++) {
        if (school[i].id == deleteId) {
            for (int j = i; j < studentCount - 1; j++) {
                school[j] = school[j + 1];}
            studentCount--; 
            printf("Student deleted successfully!\n");
            found = 1;
            break;}}
    if (found == 0) {
        printf("Student not found.\n");}}