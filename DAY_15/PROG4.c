#include<stdio.h>
void enter(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}