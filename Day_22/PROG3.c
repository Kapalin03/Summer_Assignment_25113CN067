#include<stdio.h>
#include<string.h>
void freq(char ch[100]);
int main()
{char ch[100];
printf("Enter the string: ");
fgets(ch,100,stdin);
int b=strlen(ch);
ch[b-1]='\0';
freq(ch);
return 0;}

void freq(char ch[100])
{int i, j;
    int b=strlen(ch);
for(i = 0; i < b; i++)
{if (ch[i] == -1) {continue;}
char a = ch[i];
int s = 0;        
for(j = i; j < b; j++) {
if(ch[j] == -1) {continue;}
else {if(ch[j] == a) {s = s + 1;
ch[j] = -1; }}}
printf("%c: %d times\n", a, s);}}