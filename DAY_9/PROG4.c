#include<stdio.h>
int main()
{int num,i,j;
printf("Enter number of rows: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{for(j=1;j<=num;j++)
{if((i==1)||(i==num)||(j==1)||(j==num))printf("*");
else{printf(" ");}}
printf("\n");}
return 0;}