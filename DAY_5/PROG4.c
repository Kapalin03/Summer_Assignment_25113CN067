#include<stdio.h>
int main()
{
    int num,fact=2,i;
    printf("Enter number: ");
    scanf("%d",&num);
    int a=num;
    if(num==1)
    {printf("1 is neither prime nor composite.");}
    else{
    while(num>1)
    {if(num%fact==0)
    {num=num/fact;}
    else{fact=fact+1;}}
    printf("The biggest prime factor of %d is %d.",a,fact);}
    return 0;
}