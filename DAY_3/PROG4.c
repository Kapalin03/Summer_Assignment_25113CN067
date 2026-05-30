#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        for(i=a;i<=(a*b);i++)
        {if((i%a==0)&&(i%b==0))
        {printf("LCM of %d and %d is %d.",a,b,i);
        break;}}
    }
    else if(b>a)
    {
        for(i=b;i<=(a*b);i++)
        {if((i%a==0)&&(i%b==0))
        {printf("LCM of %d and %d is %d.",a,b,i);
        break;}}
    }
    else
    {printf("LCM of %d and %d is %d.",a,b,a);}
    return 0;
}