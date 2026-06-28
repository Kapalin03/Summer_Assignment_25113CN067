#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contact {
    int id;
    char name[50];
    char phone[20];
    char email[50];
};
void add_contact(struct Contact directory[], int *contact_count);
void display_contacts(struct Contact directory[], int contact_count);
void search_contact(struct Contact directory[], int contact_count);
int main() {
    struct Contact directory[100];
    int contact_count = 0;
    int choice;
    printf("WELCOME TO THE CONTACT MANAGEMENT SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. ADD NEW CONTACT\n");
        printf("2. DISPLAY ALL CONTACTS\n");
        printf("3. SEARCH CONTACT BY NAME\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_contact(directory, &contact_count);
        } else if (choice == 2) {
            display_contacts(directory, contact_count);
        } else if (choice == 3) {
            search_contact(directory, contact_count);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void add_contact(struct Contact directory[], int *contact_count) {
    printf("\n--- ADD NEW CONTACT ---\n");
    directory[*contact_count].id = *contact_count + 1;
    getchar(); 
    printf("Enter Name: ");
    fgets(directory[*contact_count].name, sizeof(directory[*contact_count].name), stdin);
    int name_len = strlen(directory[*contact_count].name);
    if (directory[*contact_count].name[name_len - 1] == '\n') {
        directory[*contact_count].name[name_len - 1] = '\0';}
    printf("Enter Phone Number: ");
    fgets(directory[*contact_count].phone, sizeof(directory[*contact_count].phone), stdin);
    int phone_len = strlen(directory[*contact_count].phone);
    if (directory[*contact_count].phone[phone_len - 1] == '\n') {
        directory[*contact_count].phone[phone_len - 1] = '\0';}
    printf("Enter Email Address: ");
    fgets(directory[*contact_count].email, sizeof(directory[*contact_count].email), stdin);
    int email_len = strlen(directory[*contact_count].email);
    if (directory[*contact_count].email[email_len - 1] == '\n') {
        directory[*contact_count].email[email_len - 1] = '\0';}
    printf("CONTACT SAVED SUCCESSFULLY WITH ID: %d\n", directory[*contact_count].id);
    (*contact_count)++;}
void display_contacts(struct Contact directory[], int contact_count) {
    if (contact_count == 0) {
        printf("\nYOUR CONTACT DIRECTORY IS EMPTY.\n");
        return;}
    printf("\n--- ALL CONTACTS ---\n");
    for (int i = 0; i < contact_count; i++) {
        printf("ID: %d | Name: %s | Phone: %s | Email: %s\n", 
               directory[i].id, 
               directory[i].name, 
               directory[i].phone, 
               directory[i].email);}}
void search_contact(struct Contact directory[], int contact_count) {
    if (contact_count == 0) {
        printf("\nNO CONTACTS AVAILABLE TO SEARCH.\n");
        return;}
    char search_name[50];
    int found = 0;
    getchar(); 
    printf("\nEnter Name to Search: ");
    fgets(search_name, sizeof(search_name), stdin);
    int len = strlen(search_name);
    if (search_name[len - 1] == '\n') {
        search_name[len - 1] = '\0';}
    printf("\n--- SEARCH RESULTS ---\n");
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(directory[i].name, search_name) == 0) {
            printf("ID: %d | Name: %s | Phone: %s | Email: %s\n", 
                   directory[i].id, 
                   directory[i].name, 
                   directory[i].phone, 
                   directory[i].email);
            found = 1;}}
    if (found == 0) {
        printf("NO CONTACT FOUND WITH THE NAME: %s\n", search_name);}}