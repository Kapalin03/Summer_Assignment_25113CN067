#include<stdio.h>
int main()
{
    int num,s=0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {s=s+i;}
    }
    if(s==num)
    {printf("%d is a perfect number.",num);}
    else
    {printf("%d is not a perfect number.",num);}
    return 0;
}