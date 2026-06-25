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
void saveToFile();
void loadFromFile();

int main() {
    int choice;
    loadFromFile();

    while (1) {
        printf("\n--- Student Management System (with Files) ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Save and Exit\n");
        printf("Enter choice: ");
        
        // If scanf fails to read an integer, we handle it cleanly
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear the bad character from the input buffer
            continue; // Skip the rest of the loop and show the menu again
        }
        
        while (getchar() != '\n'); // Clean the buffer after a valid number input too

        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            displayStudents();
        } else if (choice == 3) {
            searchStudent();
        } else if (choice == 4) {
            deleteStudent();
        } else if (choice == 5) {
            saveToFile(); 
            printf("Data saved. Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

void addStudent() {
    if (studentCount < 100) {
        printf("Enter ID: ");
        scanf("%d", &school[studentCount].id);
        
        printf("Enter Name (No spaces): ");
        scanf("%s", school[studentCount].name);
        
        printf("Enter GPA: ");
        scanf("%f", &school[studentCount].gpa);
        
        studentCount++; 
        printf("Student added to temporary memory successfully!\n");
    } else {
        printf("Database is full!\n");
    }
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No records found.\n");
    } else {
        printf("\n--- Student List ---\n");
        for (int i = 0; i < studentCount; i++) {
            printf("ID: %d, Name: %s, GPA: %.2f\n", school[i].id, school[i].name, school[i].gpa);
        }
    }
}

void searchStudent() {
    int searchId;
    int found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchId);
    
    for (int i = 0; i < studentCount; i++) {
        if (school[i].id == searchId) {
            printf("Found! Name: %s, GPA: %.2f\n", school[i].name, school[i].gpa);
            found = 1;
            break; 
        }
    }
    if (found == 0) {
        printf("Student not found.\n");
    }
}

void deleteStudent() {
    int deleteId;
    int found = 0;
    printf("Enter ID to delete: ");
    scanf("%d", &deleteId);
    
    for (int i = 0; i < studentCount; i++) {
        if (school[i].id == deleteId) {
            for (int j = i; j < studentCount - 1; j++) {
                school[j] = school[j + 1];
            }
            studentCount--; 
            printf("Student deleted from temporary memory!\n");
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Student not found.\n");
    }
}

void saveToFile() {
    FILE *file = fopen("students.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%d %s %.2f\n", school[i].id, school[i].name, school[i].gpa);
    }
    fclose(file); 
}

void loadFromFile() {
    FILE *file = fopen("students.txt", "r"); 
    if (file == NULL) {
        return;
    }
    studentCount = 0;
    while (studentCount < 100) {
        int id;
        char name[50];
        float gpa;
        if (fscanf(file, "%d %s %f", &id, name, &gpa) != 3) {
            break; 
        }
        school[studentCount].id = id;
        for(int i = 0; name[i] != '\0'; i++) {
            school[studentCount].name[i] = name[i];
            school[studentCount].name[i+1] = '\0';
        }
        school[studentCount].gpa = gpa;
        studentCount++;
    } 
    fclose(file);
}