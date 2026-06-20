#include<stdio.h>
#include<string.h>
void palindrome(char ch[100]);
int main(){
    char ch[100];
    printf("Enter the string(in capital letters): ");
    fgets(ch,100,stdin);
    int b=strlen(ch);
    ch[b-1]='\0';
    palindrome(ch);
    return 0;
}
void palindrome(char ch[100]){
    int i;
    char ch2[100];
    int b=strlen(ch);
    for(i=0;i<b;i++){
        ch2[i]=ch[b-1-i];
    }ch2[i]='\0';
    if(strcmp(ch,ch2)==0){printf("Palindomre string.");}
    else{printf("Not a palindrome string");}
}