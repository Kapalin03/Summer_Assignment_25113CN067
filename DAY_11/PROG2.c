#include<stdio.h>
int maxno(int a,int b);
int main()
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    if(a==b){printf("Both are equal.");}
    else{printf("%d is bigger.",maxno(a,b));}
    return 0;
}
int maxno(int a,int b){
    if(a>b){return a;}
    else{return b;}
}