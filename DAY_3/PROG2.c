#include<stdio.h>
int main()
{
    int a,b,i,j,d;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {d=0;
        for(j=1;j<=i;j++)
        {if(i%j==0)
        {d=d+1;}}
    if(d==2)
    {printf("%d is prime number.\n",i);}}
    return 0;
}