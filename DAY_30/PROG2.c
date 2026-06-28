#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    int is_available; // 1 = Available, 0 = Checked Out
};
void add_book(struct Book library[], int *book_count);
void view_books(struct Book library[], int book_count);
int main() {
    struct Book library[50];
    int book_count = 0;
    int choice;
    printf("WELCOME TO THE MINI LIBRARY SYSTEM\n");
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. ADD BOOK\n");
        printf("2. VIEW BOOKS\n");
        printf("3. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_book(library, &book_count);
        } else if (choice == 2) {
            view_books(library, book_count);
        } else if (choice == 3) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! TRY AGAIN.\n");}}
    return 0;}
void add_book(struct Book library[], int *book_count) {
    if (*book_count >= 50) {
        printf("\nLIBRARY IS FULL!\n");
        return;}
    printf("\n--- ADD NEW BOOK ---\n");
    library[*book_count].id = 101 + *book_count;
    getchar(); 
    printf("Enter Book Title: ");
    fgets(library[*book_count].title, sizeof(library[*book_count].title), stdin);
    int len = strlen(library[*book_count].title);
    if (library[*book_count].title[len - 1] == '\n') {
        library[*book_count].title[len - 1] = '\0';}
    library[*book_count].is_available = 1; 
    printf("BOOK ADDED SUCCESSFULLY WITH ID: %d\n", library[*book_count].id);
    (*book_count)++;}
void view_books(struct Book library[], int book_count) {
    if (book_count == 0) {
        printf("\nNO BOOKS IN THE LIBRARY.\n");
        return;}
    printf("\n--- BOOK LIST ---\n");
    for (int i = 0; i < book_count; i++) {
        printf("ID: %d | Title: %s | Status: %s\n", 
               library[i].id, 
               library[i].title, 
               library[i].is_available == 1 ? "AVAILABLE" : "CHECKED OUT");}}