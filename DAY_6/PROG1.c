#include<stdio.h>
#include<math.h>
int main()
{
    int num,bin,i,d,s=0,n=0;
    printf("Enter the decimal number: ");
    scanf("%d",&num);
    for (i=num;i>0;i=i/2)
    {d=i%2;
    s=s+(d*(int)round(pow(10,n)));
    n=n+1;}
    printf("The binary for %d is %d",num,s);
    return 0;
}