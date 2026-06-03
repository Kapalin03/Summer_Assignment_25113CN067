#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {for(j=i;j>=1;j--){printf("*");}
    printf("\n");}
    return 0;
}