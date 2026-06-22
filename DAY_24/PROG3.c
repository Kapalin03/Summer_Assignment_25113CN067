#include <stdio.h>
#include <string.h>
void findLongestWord(char ch[100]);
int main() {
    char ch[100];
    printf("Enter a sentence: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch);
    ch[b - 1] = '\0';
    findLongestWord(ch);
    return 0;}
void findLongestWord(char ch[100]) {
    int i;
    int b = strlen(ch);
    char longest[100] = ""; 
    char current[100] = ""; 
    int current_len = 0;
    int max_len = 0;
    for (i = 0; i <= b; i++) {
        if (ch[i] == ' ' || ch[i] == '\0') {
            current[current_len] = '\0'; 
            if (current_len > max_len) {
                max_len = current_len;
                strcpy(longest, current); }
            current_len = 0; 
        } else {
            current[current_len] = ch[i];
            current_len++;}}
    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", max_len);
}