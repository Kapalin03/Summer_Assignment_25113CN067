#include<stdio.h>
#include<string.h>
void vnc(char ch[100]);
int main(){char ch[100];
    printf("Enter string: ");
    gets(ch);
    vnc(ch);
    return 0;
}
void vnc(char ch[100]){int i;
    int v=0,c=0;
    for(i=0;ch[i]!='\0';i++){
        if(((ch[i]>='A')&&(ch[i]<='Z'))||((ch[i]>='a')&&(ch[i]<='z'))){
            if((ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U')||(ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
        {v++;}
        else{c++;}
        }

    }
    printf("Number of vowels are: %d.\n",v);
    printf("Number of consonants are: %d.",c);
}