#include<stdio.h>
int main()
{int num,i,j,k,l;
printf("Enter number of rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{for(j=num;j>i;j--)
{printf(" ");}
for(k=1;k<=i;k++)
printf("%c",k+64);
for(l=i-1;l>0;l--)
{printf("%c",l+64);}
printf("\n");}
return 0;}