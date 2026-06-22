#include <stdio.h>
#include <string.h>
void find_common(char ch1[100], char ch2[100]);
int main() {
    char ch1[100];
    char ch2[100];
    printf("Enter the first string: ");
    fgets(ch1, 100, stdin);
    int b1 = strlen(ch1);
    ch1[b1 - 1] = '\0'; 
    printf("Enter the second string: ");
    fgets(ch2, 100, stdin);
    int b2 = strlen(ch2);
    ch2[b2 - 1] = '\0'; 
    find_common(ch1, ch2);
    return 0;}
void find_common(char ch1[100], char ch2[100]) {
    int i, j, k = 0;
    char ch3[100]; 
    int b1 = strlen(ch1);
    int b2 = strlen(ch2);
    for(i = 0; i < b1; i++) {
        if(ch1[i] == -1) { 
            continue; }
        char a = ch1[i];
        for(j = 0; j < b2; j++) {
            if(ch2[j] == -1) { 
                continue; }
            if(ch2[j] == a) {
                ch3[k] = a; 
                k++;
                ch2[j] = -1; 
                break;}}}
    ch3[k] = '\0'; 
    printf("Common characters: ");
    puts(ch3);
}