#include<stdio.h>
int main()
{
    int num,i,d,s=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i>0;i=i/2)
    {
    d=i%2;
    if(d==1){s=s+1;}
    }
    printf("The set bits in %d is %d.",num,s);
    return 0;
}