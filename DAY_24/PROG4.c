#include <stdio.h>
#include <string.h>
void removeDuplicates(char ch[100]);
int main() {
    char ch[100];
    printf("Enter a string: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch);
    ch[b - 1] = '\0';
    removeDuplicates(ch);
    return 0;}
void removeDuplicates(char ch[100]) {
    int i;
    int b = strlen(ch);
    char result[100];
    int k = 0;
    int seen[128] = {0};
    for (i = 0; i < b; i++) {
        int ascii_val = (int)ch[i];
        if (seen[ascii_val] == 0) {
            seen[ascii_val] = 1;  
            result[k] = ch[i];    
            k++;}}
    result[k] = '\0'; 
    printf("After removing duplicate characters: ");
    puts(result);}