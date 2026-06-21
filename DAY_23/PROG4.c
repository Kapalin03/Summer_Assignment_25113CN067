#include<stdio.h>
#include<string.h>
void nonr(char ch[100]);
int main()
{char ch[100];
printf("Enter the string: ");
fgets(ch,100,stdin);
int b=strlen(ch);
ch[b-1]='\0';
nonr(ch);
return 0;}

void nonr(char ch[100])
{int i, j,k=0;
    char ch2[100];
    int b=strlen(ch);
for(i = 0; i < b; i++)
{if (ch[i] == -1) {continue;}
char a = ch[i];
int s = 0;        
for(j = i; j < b; j++) {
if(ch[j] == -1) {continue;}
else {if(ch[j] == a) {s = s + 1;
ch[j] = -1; }}}
if(s==1){ch2[k]=a;
k++;}}
ch2[k]='\0';
printf("After removing repetitive characters: ");
puts(ch2);}