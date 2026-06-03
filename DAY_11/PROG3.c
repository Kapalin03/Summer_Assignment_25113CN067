#include<stdio.h>
int prime_check(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num==0||num==1){printf("%d is neither prime nor composite.",num);}
    else if(prime_check(num)==0){printf("%d is a prime number.",num);}
    else{printf("%d is not a prime number.",num);}
    return 0;
}
int prime_check(int n){
    int i,s=0;
    for(i=2;i<=(n-1);i++){if(n%i==0){s=s+1;}}
    if(s==0){return 0;}
    else{return 1;}
}