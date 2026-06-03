#include<stdio.h>
int main()
{
    int i,k,num;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for(i=1;i<=5;i++)
    {for(k=1;k<=i;k++)
    {printf("%c",k+64);}
    printf("\n");}
    return 0;
}