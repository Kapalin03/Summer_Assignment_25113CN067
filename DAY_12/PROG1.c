#include<stdio.h>
int pal(int n);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(pal(num)==0){printf("%d is a palindrome number.",num);}
    else{printf("%d is not a palindrome number.",num);}
    return 0;
}
int pal(int n){
    int rev=0,d,i;
    for(i=n;i>0;i=i/10){d=i%10;
    rev=(rev*10)+d;}
    if(rev==n){return 0;}
    else{return 1;}
}