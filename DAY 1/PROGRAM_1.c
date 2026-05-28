#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the final number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {sum=sum+i;}
    printf("The sum of natural numbers till %d is %d.",n,sum);
}