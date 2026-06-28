#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ticket {
    int ticket_id;
    char customer_name[50];
    int seat_number;
    float price;
};
void book_ticket(struct Ticket system[], int *ticket_count, int seats[]);
void display_booked_tickets(struct Ticket system[], int ticket_count);
void check_seat_availability(int seats[]);
int main() {
    struct Ticket system[50]; 
    int seats[50] = {0}; 
    int ticket_count = 0;
    int choice;
    printf("WELCOME TO THE TICKET BOOKING SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. BOOK A TICKET\n");
        printf("2. VIEW ALL BOOKED TICKETS\n");
        printf("3. CHECK SEAT AVAILABILITY\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            book_ticket(system, &ticket_count, seats);
        } else if (choice == 2) {
            display_booked_tickets(system, ticket_count);
        } else if (choice == 3) {
            check_seat_availability(seats);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... THANK YOU!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void book_ticket(struct Ticket system[], int *ticket_count, int seats[]) {
    printf("\n--- TICKET BOOKING ---\n");
    int seat_num;
    printf("Enter preferred seat number (1 to 50): ");
    scanf("%d", &seat_num);
    if (seat_num < 1 || seat_num > 50) {
        printf("INVALID SEAT NUMBER!!! PLEASE CHOOSE BETWEEN 1 AND 50.\n");
        return;}
    if (seats[seat_num - 1] == 1) {
        printf("SORRY, SEAT %d IS ALREADY BOOKED!\n", seat_num);
        return;}
    system[*ticket_count].ticket_id = 2001 + *ticket_count;
    system[*ticket_count].seat_number = seat_num;
    system[*ticket_count].price = 12.50; 
    getchar(); 
    printf("Enter Customer Name: ");
    fgets(system[*ticket_count].customer_name, sizeof(system[*ticket_count].customer_name), stdin);
    int len = strlen(system[*ticket_count].customer_name);
    if (system[*ticket_count].customer_name[len - 1] == '\n') {
        system[*ticket_count].customer_name[len - 1] = '\0';}
    seats[seat_num - 1] = 1; 
    printf("TICKET BOOKED SUCCESSFULLY!!!\n");
    printf("YOUR TICKET ID IS: %d | SEAT NUMBER: %d\n", system[*ticket_count].ticket_id, system[*ticket_count].seat_number);
    (*ticket_count)++;}
void display_booked_tickets(struct Ticket system[], int ticket_count) {
    if (ticket_count == 0) {
        printf("\nNO TICKETS BOOKED YET.\n");
        return;}
    printf("\n--- BOOKED TICKETS INVENTORY ---\n");
    for (int i = 0; i < ticket_count; i++) {
        printf("ID: %d | Customer: %s | Seat: %d | Price: $%.2f\n", 
               system[i].ticket_id, 
               system[i].customer_name, 
               system[i].seat_number, 
               system[i].price);}}
void check_seat_availability(int seats[]) {
    printf("\n--- SEAT AVAILABILITY (1-50) ---\n");
    int available_count = 0;
    for (int i = 0; i < 50; i++) {
        if (seats[i] == 0) {
            printf("[ Seat %d: AVAILABLE ]   ", i + 1);
            available_count++;
        } else {
            printf("[ Seat %d: BOOKED    ]   ", i + 1);}
        if ((i + 1) % 5 == 0) {
            printf("\n");}}
    printf("\nTOTAL AVAILABLE SEATS: %d OUT OF 50\n", available_count);}