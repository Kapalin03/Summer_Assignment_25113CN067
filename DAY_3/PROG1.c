#include<stdio.h>
int main()
{
    int n, i,d=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {if(n%i==0)
    {d=d+1;}}
    if(d==2)
    {printf("%d is a prime number.",n);}
    else
    {printf("%d is not a prime number.",n);}
    return 0;

}