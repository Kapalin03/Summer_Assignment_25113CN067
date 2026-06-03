#include<stdio.h>
int revn(int n,int m);
int main()
{int num;
printf("Enter the number: ");
scanf("%d",&num);
printf("Reverse of %d is %d.",num,revn(num,0));
return 0;}
int revn(int n,int m){
    if(n==0){return m;}
    int d=n%10;
    m=(m*10)+d;
    int r=revn(n/10,m);
    return r;
}