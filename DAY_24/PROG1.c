#include <stdio.h>
#include <string.h>
void checkRotation(char str1[100], char str2[100]);
int main() {
    char str1[100],str2[100];
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    int b1 = strlen(str1);
    str1[b1 - 1] = '\0';
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    int b2 = strlen(str2);
    str2[b2 - 1] = '\0';
    checkRotation(str1, str2);
    return 0;
}
void checkRotation(char str1[100], char str2[100]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char temp[200] = ""; 
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return;}
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");}
}