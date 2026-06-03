#include<stdio.h>
int main()
{int num,i,k,j;
printf("Enter number of rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{for(j=1;j<i;j++)
{printf(" ");}
for(k=(2*(num-i))+1;k>=1;k--)
{printf("*");}
printf("\n");}
return 0;}