#include<stdio.h>
int main()
{
    int first=0,second=1,third,n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=0;i<(n-2);i++)
    {third=first+second;
    first=second;
    second=third;}
    printf("%dth term is %d.",n,third);
    return 0;
}