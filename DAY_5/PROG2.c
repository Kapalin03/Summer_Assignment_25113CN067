#include<stdio.h>
int main()
{
    int num,i,j,fact,sum=0,d;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    {d=i%10;
    if((d==0)||(d==1))
    {fact=1;}
    else
    {fact=1;
    for(j=d;j>=2;j=j-1)
    {fact=fact*j;}}
    sum=sum+fact;}
    if(sum==num)
    {printf("%d is a strong number.",num);}
    else{printf("%d is not a strong number.",num);}
    return 0;
}