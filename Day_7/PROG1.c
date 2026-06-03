#include <stdio.h>
int fact(int n);
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Factorial of %d is: %d",num,fact(num));
    return 0;
}
int fact(int n){
    if(n==0){return 1;}
    else if(n==1){return 1;}
    int f= n*fact(n-1);
    return f;
}