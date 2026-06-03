#include<stdio.h>
int fact(int n);
int main()
{int num;
printf("Enter number: ");
scanf("%d",&num);
if((num==0)||(num==1)){printf("Factorial of %d is 1.",num);}
else{printf("Factorial of %d is %d.",num, fact(num));}
return 0;}
int fact(int n){
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {factorial=factorial*i;}
    return factorial;
}
