#include <stdio.h>
#include <string.h>
int adult();
int nationality();
int main() {
    printf("--------------------------------\n");
    printf("...VOTING ELIGIBILITY CHECKER...\n");
    printf("--------------------------------\n");
    int a = adult();
    int b = nationality();
    printf("\n--------------------------------\n");
    if ((a == 1) && (b == 1)) {
        printf("RESULT: ELIGIBLE FOR VOTING.\n");
    } else {
        printf("RESULT: INELIGIBLE FOR VOTING.\n\n\n");
    }
    return 0;
}
int adult() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    while (getchar() != '\n'); 
    if (age >= 18) {
        printf("AGE CRITERIA PASSED.\n\n");
        return 1; // Return 1 for Pass
    } else {
        printf("AGE CRITERIA FAILED.\n\n");
        return 0; // Return 0 for Fail
    }
}
int nationality() {
    char na[100];
    char nar[100] = "INDIAN";   
    printf("Enter your nationality (in block letters): ");
    fgets(na, 100, stdin);
    na[strcspn(na, "\n")] = '\0';
    int match = strcmp(na, nar);
    if (match == 0) { 
        printf("NATIONALITY CHECK PASSED.\n");
        return 1;
    } else {
        printf("NATIONALITY CHECK FAILED.\n");
        return 0;}}