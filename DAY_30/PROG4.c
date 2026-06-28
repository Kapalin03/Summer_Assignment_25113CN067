#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Room {
    int room_number;
    char customer_name[50];
    int is_booked; 
    float price_per_night;
};
void book_room(struct Room hotel[], int total_rooms);
void view_rooms(struct Room hotel[], int total_rooms);
void checkout_room(struct Room hotel[], int total_rooms);
int main() {
    struct Room hotel[10];
    int total_rooms = 10;
    int choice;
    for (int i = 0; i < total_rooms; i++) {
        hotel[i].room_number = 101 + i;
        hotel[i].is_booked = 0;
        strcpy(hotel[i].customer_name, "None");
        hotel[i].price_per_night = 45.00; }
    printf("WELCOME TO THE MINI HOTEL RESERVATION SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. BOOK A ROOM\n");
        printf("2. VIEW ALL ROOMS\n");
        printf("3. CHECKOUT / VACATE ROOM\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            book_room(hotel, total_rooms);
        } else if (choice == 2) {
            view_rooms(hotel, total_rooms);
        } else if (choice == 3) {
            checkout_room(hotel, total_rooms);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... THANK YOU!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void book_room(struct Room hotel[], int total_rooms) {
    int room_num;
    int found = 0;
    printf("\n--- ROOM BOOKING ---\n");
    printf("Enter Room Number to book (101 to 110): ");
    scanf("%d", &room_num);
    for (int i = 0; i < total_rooms; i++) {
        if (hotel[i].room_number == room_num) {
            found = 1;
            if (hotel[i].is_booked == 1) {
                printf("SORRY, ROOM %d IS ALREADY BOOKED BY %s.\n", room_num, hotel[i].customer_name);
            } else {
                getchar(); 
                printf("Enter Guest Name: ");
                fgets(hotel[i].customer_name, sizeof(hotel[i].customer_name), stdin);
                int len = strlen(hotel[i].customer_name);
                if (hotel[i].customer_name[len - 1] == '\n') {
                    hotel[i].customer_name[len - 1] = '\0';}
                hotel[i].is_booked = 1;
                printf("ROOM %d BOOKED SUCCESSFULLY FOR %s!!!\n", room_num, hotel[i].customer_name);}
            break;}}
    if (found == 0) {
        printf("INVALID ROOM NUMBER!!! NOT FOUND.\n");}}
void view_rooms(struct Room hotel[], int total_rooms) {
    printf("\n--- HOTEL ROOM STATUS ---\n");
    for (int i = 0; i < total_rooms; i++) {
        printf("Room %d | Status: %s | Guest: %s | Price: $%.2f\n",
               hotel[i].room_number,
               hotel[i].is_booked == 1 ? "BOOKED  " : "AVAILABLE",
               hotel[i].customer_name,
               hotel[i].price_per_night);}}
void checkout_room(struct Room hotel[], int total_rooms) {
    int room_num;
    int found = 0;
    int nights;
    printf("\n--- ROOM CHECKOUT ---\n");
    printf("Enter Room Number for checkout: ");
    scanf("%d", &room_num);
    for (int i = 0; i < total_rooms; i++) {
        if (hotel[i].room_number == room_num) {
            found = 1;
            if (hotel[i].is_booked == 0) {
                printf("THIS ROOM IS CURRENTLY EMPTY / ALREADY VACANT.\n");
            } else {
                printf("Enter number of nights stayed: ");
                scanf("%d", &nights);
                float total_bill = nights * hotel[i].price_per_night;
                printf("\n--- INVOICE FOR %s ---\n", hotel[i].customer_name);
                printf("Total Stay: %d nights\n", nights);
                printf("Total Amount Due: $%.2f\n", total_bill);
                printf("CHECKOUT SUCCESSFUL!!! ROOM %d IS NOW VACANT.\n", room_num);
                hotel[i].is_booked = 0;
                strcpy(hotel[i].customer_name, "None");}
            break;}}
    if (found == 0) {
        printf("INVALID ROOM NUMBER!!! NOT FOUND.\n");}}