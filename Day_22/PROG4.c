#include<stdio.h>
#include<string.h>
void remove_spaces(char ch[100]);
int main(){
    char ch[100];
    printf("Enter the sentence:  ");
    fgets(ch,100,stdin);
    int b=strlen(ch);
    ch[b-1]='\0';
    remove_spaces(ch);
    return 0;
}
void remove_spaces(char ch[100]){
    int i,j;
    int b=strlen(ch);
    for(i=0;i<b;i++){
        if(ch[i]==32){for(j=i;j<b;j++){ch[j]=ch[j+1];}}
    }
    printf("Without spaces: ");
    puts(ch);
}