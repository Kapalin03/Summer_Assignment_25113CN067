#include<stdio.h>
int main()
{
    int d,a,i,sum=0;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {d=i%10;
    sum=sum+d;}
    printf("The sum of digits is %d.",sum);
    return 0;
}