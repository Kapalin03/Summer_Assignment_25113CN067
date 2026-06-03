#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Sum of %d and %d is %d.",a,b,sum(a,b));
    return 0;
}
int sum(int a,int b){
    return a+b;
}