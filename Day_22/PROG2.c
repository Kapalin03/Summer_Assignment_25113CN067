#include<stdio.h>
#include<string.h>
void words(char ch[100]);
int main(){
    char ch[100];
    printf("Enter the sentence:  ");
    fgets(ch,100,stdin);
    int b=strlen(ch);
    ch[b-1]='\0';
    words(ch);
    return 0;
}
void words(char ch[100]){
    int i, count=1;
    int b=strlen(ch);
    for(i=0;i<b;i++){
        if(ch[i]==32){count++;}
    }
    printf("The number of word/s is/are: %d",count);
}