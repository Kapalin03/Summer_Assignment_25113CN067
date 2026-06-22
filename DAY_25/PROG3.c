#include<stdio.h>
#include<string.h>
void sort_string(char ch[100]);
int main() {
    char ch[100];
    printf("Enter names separated by spaces: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch);
    ch[b - 1] = '\0';
    sort_string(ch);   
    return 0;
}
void sort_string(char ch[100]) {
    int i, j;
    char temp;
    int b = strlen(ch);
    for(i = 0; i < b - 1; i++) {
        for(j = i + 1; j < b; j++) {
            if(ch[i] == ' ' || ch[j] == ' ') {
                continue;
            }
            if(ch[i] > ch[j]) {
                temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;}}}
    printf("Alphabetical order of characters: ");
    puts(ch);
}