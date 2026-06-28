#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    int is_issued; 
};
void add_books(struct Book library[], int *book_count);
void display_books(struct Book library[], int book_count);
void issue_book(struct Book library[], int book_count);
int main() {
    struct Book library[100]; 
    int book_count = 0;
    int choice;
    printf("WELCOME TO THE LIBRARY MANAGEMENT SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. ADD BOOKS\n");
        printf("2. DISPLAY ALL BOOKS\n");
        printf("3. ISSUE A BOOK\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_books(library, &book_count);
        } else if (choice == 2) {
            display_books(library, book_count);
        } else if (choice == 3) {
            issue_book(library, book_count);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void add_books(struct Book library[], int *book_count) {
    int num_to_add;
    printf("\nHow many books do you want to add? ");
    scanf("%d", &num_to_add);
    getchar(); 
    for (int i = 0; i < num_to_add; i++) {
        printf("\nEnter details for Book %d:\n", *book_count + 1);
        library[*book_count].id = *book_count + 1; 
        printf("Enter Title: ");
        fgets(library[*book_count].title, sizeof(library[*book_count].title), stdin);
        int title_len = strlen(library[*book_count].title);
        if (library[*book_count].title[title_len - 1] == '\n') {
            library[*book_count].title[title_len - 1] = '\0';}
        printf("Enter Author: ");
        fgets(library[*book_count].author, sizeof(library[*book_count].author), stdin);
        int author_len = strlen(library[*book_count].author);
        if (library[*book_count].author[author_len - 1] == '\n') {
            library[*book_count].author[author_len - 1] = '\0';}
        library[*book_count].is_issued = 0; 
        printf("BOOK ADDED SUCCESSFULLY WITH ID: %d\n", library[*book_count].id);
        (*book_count)++;}}
void display_books(struct Book library[], int book_count) {
    if (book_count == 0) {
        printf("\nTHE LIBRARY IS EMPTY.\n");
        return;}
    printf("\n--- LIBRARY INVENTORY ---\n");
    for (int i = 0; i < book_count; i++) {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n", 
               library[i].id, 
               library[i].title, 
               library[i].author, 
               library[i].is_issued == 1 ? "ISSUED" : "AVAILABLE");}}
void issue_book(struct Book library[], int book_count) {
    if (book_count == 0) {
        printf("\nNO BOOKS AVAILABLE TO ISSUE.\n");
        return;}
    int target_id;
    int found = 0;
    printf("\nEnter the Book ID you want to issue: ");
    scanf("%d", &target_id);
    for (int i = 0; i < book_count; i++) {
        if (library[i].id == target_id) {
            found = 1;
            if (library[i].is_issued == 1) {
                printf("SORRY, THIS BOOK IS ALREADY ISSUED.\n");
            } else {
                library[i].is_issued = 1;
                printf("BOOK '%s' HAS BEEN ISSUED SUCCESSFULY!!!\n", library[i].title);
            }
            break;}}
    if (found == 0) {
        printf("BOOK ID NOT FOUND!!!\n");}}