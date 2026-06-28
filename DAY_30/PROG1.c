#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int roll_number;
    char name[50];
    char course[50];
    float marks;
};
void add_student(struct Student database[], int *student_count);
void display_students(struct Student database[], int student_count);
void search_student(struct Student database[], int student_count);
int main() {
    struct Student database[100];
    int student_count = 0;
    int choice;
    printf("WELCOME TO THE STUDENT RECORD SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. ADD NEW STUDENT\n");
        printf("2. DISPLAY ALL STUDENTS\n");
        printf("3. SEARCH STUDENT BY ROLL NUMBER\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_student(database, &student_count);
        } else if (choice == 2) {
            display_students(database, student_count);
        } else if (choice == 3) {
            search_student(database, student_count);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void add_student(struct Student database[], int *student_count) {
    printf("\n--- ADD NEW STUDENT ---\n");
    printf("Enter Roll Number: ");
    scanf("%d", &database[*student_count].roll_number);
    getchar(); 
    printf("Enter Student Name: ");
    fgets(database[*student_count].name, sizeof(database[*student_count].name), stdin);
    int name_len = strlen(database[*student_count].name);
    if (database[*student_count].name[name_len - 1] == '\n') {
        database[*student_count].name[name_len - 1] = '\0';}
    printf("Enter Course: ");
    fgets(database[*student_count].course, sizeof(database[*student_count].course), stdin);
    int course_len = strlen(database[*student_count].course);
    if (database[*student_count].course[course_len - 1] == '\n') {
        database[*student_count].course[course_len - 1] = '\0';}
    printf("Enter Total Marks: ");
    scanf("%f", &database[*student_count].marks);
    printf("STUDENT RECORD SAVED SUCCESSFULLY!!!\n");
    (*student_count)++;}
void display_students(struct Student database[], int student_count) {
    if (student_count == 0) {
        printf("\nNO STUDENT RECORDS FOUND.\n");
        return;}
    printf("\n--- ALL STUDENT RECORDS ---\n");
    for (int i = 0; i < student_count; i++) {
        printf("Roll No: %d | Name: %s | Course: %s | Marks: %.2f\n", 
               database[i].roll_number, 
               database[i].name, 
               database[i].course, 
               database[i].marks);}}
void search_student(struct Student database[], int student_count) {
    if (student_count == 0) {
        printf("\nDATABASE IS EMPTY. NO RECORDS TO SEARCH.\n");
        return;}
    int target_roll;
    int found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &target_roll);
    printf("\n--- SEARCH RESULTS ---\n");
    for (int i = 0; i < student_count; i++) {
        if (database[i].roll_number == target_roll) {
            printf("Roll No: %d | Name: %s | Course: %s | Marks: %.2f\n", 
                   database[i].roll_number, 
                   database[i].name, 
                   database[i].course, 
                   database[i].marks);
            found = 1;
            break; }}
    if (found == 0) {
        printf("NO STUDENT FOUND WITH ROLL NUMBER: %d\n", target_roll);}}