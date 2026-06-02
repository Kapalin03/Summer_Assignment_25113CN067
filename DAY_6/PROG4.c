#include<stdio.h>
int main()
{
    int x,n,p=1,i;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {p=p*x;}
    printf("%d raised to power %d is: %d",x,n,p);
    return 0;
}