#include<stdio.h>
#include<string.h>
void enter(char character[100]);
void unique_character(char character[100]);
int main(){
    char character[100]; 
    printf("Enter string: ");
    enter(character);
    unique_character(character);
    return 0;
}
void enter(char character[100]){
    fgets(character,100,stdin);
    int b=strlen(character);
    character[b-1]='\0';
}
void unique_character(char character[100]){
    int i,j,s=0;
    for(i=0;character[i]!='\0';i++){
        s=1;
        for(j=0;character[j]!='\0';j++){
            if(i!=j&&character[i]==character[j]){
                s=0;
            }
        }
        if(s==1){
            printf("First unique character: %c.",character[i]);
            break;
        }
    }
}