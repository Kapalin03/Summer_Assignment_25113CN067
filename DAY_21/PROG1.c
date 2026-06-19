#include<stdio.h>
#include<string.h>
int len_str(char ch[100]);
int main(){char ch[100];
    printf("Enter string: ");
    gets(ch);
    printf("Length of string is: %d",len_str(ch));
    return 0;
}
int len_str(char ch[100]){int i, count=0;
    for(i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}