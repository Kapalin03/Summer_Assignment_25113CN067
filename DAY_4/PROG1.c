#include<stdio.h>
int main()
{
    int first=0,second=1,third,n,i;
    printf("Enter total number of terms: ");
    scanf("%d",&n);
    printf("%d\n%d\n",first,second);
    for(i=0;i<(n-2);i++)
    {third=first+second;
    printf("%d\n",third);
    first=second;
    second=third;}
    return 0;
}