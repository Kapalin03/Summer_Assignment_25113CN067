#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};
void add_item(struct Item inventory[], int *item_count);
void display_inventory(struct Item inventory[], int item_count);
void search_item(struct Item inventory[], int item_count);
int main() {
    struct Item inventory[100];
    int item_count = 0;
    int choice;
    printf("WELCOME TO THE INVENTORY MANAGEMENT SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. ADD NEW ITEM\n");
        printf("2. DISPLAY CURRENT INVENTORY\n");
        printf("3. SEARCH ITEM BY NAME\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_item(inventory, &item_count);
        } else if (choice == 2) {
            display_inventory(inventory, item_count);
        } else if (choice == 3) {
            search_item(inventory, item_count);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void add_item(struct Item inventory[], int *item_count) {
    printf("\n--- ADD NEW ITEM ---\n");
    inventory[*item_count].id = 5001 + *item_count;
    getchar(); 
    printf("Enter Item Name: ");
    fgets(inventory[*item_count].name, sizeof(inventory[*item_count].name), stdin);
    int len = strlen(inventory[*item_count].name);
    if (inventory[*item_count].name[len - 1] == '\n') {
        inventory[*item_count].name[len - 1] = '\0';}
    printf("Enter Quantity: ");
    scanf("%d", &inventory[*item_count].quantity);
    printf("Enter Price per Unit: ");
    scanf("%f", &inventory[*item_count].price);
    printf("ITEM ADDED SUCCESSFULLY WITH ID: %d\n", inventory[*item_count].id);
    (*item_count)++;}
void display_inventory(struct Item inventory[], int item_count) {
    if (item_count == 0) {
        printf("\nINVENTORY IS CURRENTLY EMPTY.\n");
        return;}
    printf("\n--- CURRENT INVENTORY ---\n");
    for (int i = 0; i < item_count; i++) {
        printf("ID: %d | Name: %s | Quantity: %d | Price: $%.2f\n", 
               inventory[i].id, 
               inventory[i].name, 
               inventory[i].quantity, 
               inventory[i].price);}}
void search_item(struct Item inventory[], int item_count) {
    if (item_count == 0) {
        printf("\nNO ITEMS AVAILABLE TO SEARCH.\n");
        return;}
    char search_name[50];
    int found = 0;
    getchar(); 
    printf("\nEnter Item Name to Search: ");
    fgets(search_name, sizeof(search_name), stdin);
    int len = strlen(search_name);
    if (search_name[len - 1] == '\n') {
        search_name[len - 1] = '\0';}
    printf("\n--- SEARCH RESULTS ---\n");
    for (int i = 0; i < item_count; i++) {
        if (strcmp(inventory[i].name, search_name) == 0) {
            printf("ID: %d | Name: %s | Quantity: %d | Price: $%.2f\n", 
                   inventory[i].id, 
                   inventory[i].name, 
                   inventory[i].quantity, 
                   inventory[i].price);
            found = 1;}}
    if (found == 0) {
        printf("NO ITEM FOUND WITH THE NAME: %s\n", search_name);}}