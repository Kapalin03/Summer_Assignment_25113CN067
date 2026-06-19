#include<stdio.h>
#include<string.h>
void ltu(char ch[100]);
int main(){char ch[100];
    printf("Enter string: ");
    gets(ch);
    ltu(ch);
    return 0;
}
void ltu(char ch[100]){int i;
    for(i=0;ch[i]!='\0';i++){
        if((ch[i]>='a')&&(ch[i]<='z')){
            ch[i]=ch[i]-32;            
        }

    }
    puts(ch);
}