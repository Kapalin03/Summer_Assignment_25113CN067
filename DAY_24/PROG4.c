#include<stdio.h>
#include<string.h>
void sort_words_by_length(char ch[100]);
int main() {
    char ch[100];
    printf("Enter a sentence: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch);
    ch[b - 1] = '\0';
    sort_words_by_length(ch);   
    return 0;
}
void sort_words_by_length(char ch[100]) {
    char *words[50]; 
    int word_count = 0;
    int i, j;
    char *temp;
    char *token = strtok(ch, " ");
    while(token != NULL) {
        words[word_count] = token;
        word_count++;
        token = strtok(NULL, " ");
    }
    for(i = 0; i < word_count - 1; i++) {
        for(j = i + 1; j < word_count; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;}}}
    printf("Words sorted by length:\n");
    for(i = 0; i < word_count; i++) {
        puts(words[i]);}}