#include<stdio.h>
int main()
{int num,i,k,j;
printf("Enter number of rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{for(j=num;j>i;j--)
{printf(" ");}
for(k=1;k<(2*i);k++)
{printf("*");}
printf("\n");}
return 0;}