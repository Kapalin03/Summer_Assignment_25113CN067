#include<stdio.h>
#include<string.h>
void rev(char ch[100]);
int main(){char ch[100];
    printf("Enter string: ");
    gets(ch);
    rev(ch);
    return 0;
}
void rev(char ch[100]){int i;
    char ch2[100];
    int n=strlen(ch);
    for(i=0;ch[i]!='\0';i++){
        ch2[i]=ch[n-1-i];
    }
    ch2[i]='\0';
    printf("Reversed string: ");
    puts(ch2);
}