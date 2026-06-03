#include<stdio.h>
void perfect(int n);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num<=0){printf("Print natural number.");}
    else{perfect(num);}
    return 0;
}
void perfect(int n){
    int i,s=0;
    for(i=1;i<n;i++){if(n%i==0){s=s+i;}}
    if(n==s){printf("%d is a perfect number.",n);}
    else{printf("%d is not a perfect number.",n);}
}