#include<stdio.h>
int main()
{
    int d,a,i,rev=0;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {d=i%10;
    rev=(rev*10)+d;}
    printf("The reverse of %d is %d.",a,rev);
    return 0;
}