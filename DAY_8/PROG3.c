#include<stdio.h>
int main()
{
    int i,k;
    for(i=1;i<=5;i++)
    {for(k=1;k<=i;k++)
    {printf("%c",k+64);}
    printf("\n");}
    return 0;
}