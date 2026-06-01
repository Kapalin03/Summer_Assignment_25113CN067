#include<stdio.h>
#include<math.h>
int main()
{
    int num,d, s=0,i,n=0;
    printf("Enter the binary number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    {d=i%10;
    s=s+(d*(int)round(pow(2,n)));
    n=n+1;}
    printf("The decimal for %d is %d.",num,s);
    return 0;
}