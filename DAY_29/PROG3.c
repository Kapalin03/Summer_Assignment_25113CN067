#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_length();
void string_concatenate();
void string_reverse();
int main() {
    int choice;
    printf("WELCOME TO THE STRING OPERATIONS SYSTEM\n");
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. FIND STRING LENGTH\n");
        printf("2. CONCATENATE STRINGS\n");
        printf("3. REVERSE A STRING\n");
        printf("4. EXIT SYSTEM\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            string_length();
        } else if (choice == 2) {
            string_concatenate();
        } else if (choice == 3) {
            string_reverse();
        } else if (choice == 4) {
            printf("EXITING SYSTEM... GOODBYE!\n");
            break;
        } else {
            printf("INVALID CHOICE!!! PLEASE TRY AGAIN.\n");}}
    return 0;}
void string_length() {
    char str[100];
    getchar(); 
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;}
    printf("THE LENGTH OF THE STRING IS: %d\n", len);}
void string_concatenate() {
    char str1[100];
    char str2[50];
    getchar(); 
    printf("\nEnter first string: ");
    fgets(str1, sizeof(str1), stdin);
    int len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';}
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';}
    strcat(str1, str2);
    printf("COMBINED STRING: %s\n", str1);}
void string_reverse() {
    char str[100];
    char reversed[100];
    getchar(); 
    printf("\nEnter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;}
    int j = 0;
    for (int i = len - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;}
    reversed[j] = '\0'; 
    printf("REVERSED STRING: %s\n", reversed);}