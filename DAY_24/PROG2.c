#include <stdio.h>
#include <string.h>
void compressString(char ch[100]);
int main() {
    char ch[100];
    printf("Enter the string to compress: ");
    fgets(ch, 100, stdin);
    int b = strlen(ch);
    ch[b - 1] = '\0';
    compressString(ch);
    return 0;}
void compressString(char ch[100]) {
    int i;
    int b = strlen(ch);
    printf("Compressed string: ");
    for (i = 0; i < b; i++) {
        int count = 1;
        while (i < b - 1 && ch[i] == ch[i + 1]) {
            count++;
            i++;}
        printf("%c%d", ch[i], count);}
    printf("\n");}