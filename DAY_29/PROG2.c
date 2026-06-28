#include <stdio.h>
#include <stdlib.h>
void insert_elements(int arr[], int *size);
void display_array(int arr[], int size);
void find_maximum(int arr[], int size);
int main() {
    int arr[100];
    int size = 0;
    int choice;
    printf("WELCOME TO THE ARRAY OPERATIONS SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. INSERT ELEMENTS\n");
        printf("2. DISPLAY ARRAY\n");
        printf("3. FIND MAXIMUM VALUE\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            insert_elements(arr, &size);
        } else if (choice == 2) {
            display_array(arr, size);
        } else if (choice == 3) {
            find_maximum(arr, size);
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void insert_elements(int arr[], int *size) {
    int num_to_add;
    printf("\nHow many elements do you want to add? ");
    scanf("%d", &num_to_add);
    if (*size + num_to_add > 100) {
        printf("ERROR!!! ARRAY MAX CAPACITY EXCEEDED.\n");
        return;}
    for (int i = 0; i < num_to_add; i++) {
        printf("Enter element %d: ", *size + 1);
        scanf("%d", &arr[*size]);
        (*size)++;}
    printf("ELEMENTS INSERTED SUCCESSFULLY!!!\n");}
void display_array(int arr[], int size) {
    if (size == 0) {
        printf("\nARRAY IS EMPTY.\n");
        return;}
    printf("\n--- CURRENT ARRAY ---\n");
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);}
    printf("]\n");
    printf("Total elements: %d\n", size);}
void find_maximum(int arr[], int size) {
    if (size == 0) {
        printf("\nARRAY IS EMPTY. CANNOT FIND MAXIMUM VALUE.\n");
        return;}
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];}}
    printf("\nTHE MAXIMUM VALUE IN THE ARRAY IS: %d\n", max);}