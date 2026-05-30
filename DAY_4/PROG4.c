#include<stdio.h>
#include<math.h>
int main()
{
    int upper,lower,a,i,j,k,d,s=0;
    printf("Enter the lower limit: ");
    scanf("%d",&lower);
    printf("Enter the upper limit: ");
    scanf("%d",&upper);
    for(k=lower;k<=upper;k++)
    {d=0,s=0;
    for(i=k;i>0;i=i/10)
    {s=s+1;}
    for(j=k;j>0;j=j/10)
    {a=j%10;
    d=d+round(pow(a,s));}
    if(d==k)
    {printf("%d is an armstrong number.\n",k);}}
    return 0;
}