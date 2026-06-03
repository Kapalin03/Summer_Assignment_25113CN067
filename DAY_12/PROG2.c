#include<stdio.h>
#include<math.h>
int arms(int n);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(arms(num)==0){printf("%d is an armstrong number.",num);}
    else{printf("%d is not an armstrong number.",num);}
    return 0;
}
int arms(int n){
    int a=0,s=0,d,i;
    for(i=n;i>0;i=i/10){d=i%10;
    a+=1;}
    for(i=n;i>0;i=i/10){d=i%10;
    s=s+(int)round(pow(d,a));}
    if(s==n){return 0;}
    else{return 1;}
}