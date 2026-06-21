#include <stdio.h>
#include <string.h>
void anagram(char ch[100], char ch2[100]);
int main() {
    char ch[100], ch2[100];
    printf("Enter first string: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch); 
    ch[b - 1] = '\0';
    printf("Enter second string: ");
    fgets(ch2, 100, stdin);
    b = strlen(ch2);    
    ch2[b - 1] = '\0';  
    anagram(ch, ch2);
    return 0;
}
void anagram(char ch[100], char ch2[100]) {
    int len1 = strlen(ch);
    int len2 = strlen(ch2);   
    if (len1 != len2) {
        printf("The strings are NOT anagrams.\n");
        return;}
    int count[256]; 
    int i;
    for (i = 0; i < 256; i++) {
        count[i] = 0;}
    for (i = 0; i < len1; i++) {
        int index1 = ch[i]; 
        int index2 = ch2[i];
        count[index1] = count[index1] + 1;
        count[index2] = count[index2] - 1;}
    int is_anagram = 1; 
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            is_anagram = 0; 
            break;}}
    if (is_anagram == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }
}