#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a<b){
    for(i=a;i>=1;i--)
    {if((a%i==0)&&(b%i==0))
    printf("GCD of %d and %d is %d.",a,b,i);
    break;}}
    else if (a>b){
    for(i=b;i>=1;i--)
    {if((a%i==0)&&(b%i==0))
    printf("GCD of %d and %d is %d.",a,b,i);
    break;}}
    else
    {printf("GCD of %d and %d is %d.",a,b,a);}
    return 0;
}