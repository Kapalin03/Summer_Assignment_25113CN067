#include<stdio.h>
void enter(int arr[],int n);
void shift_left(int arr[],int n,int k);
int main()
{
    int n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    printf("Enter the number of left rotations: ");
    scanf("%d",&k);
    shift_left(arr,n,k);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void shift_left(int arr[],int n,int k)
{
    int i,j;
    for(i=0;i<k;i++){int t=arr[0];
    for(j=0;j<n-1;j++){arr[j]=arr[j+1];}
    arr[n-1]=t;}
    for(i=0;i<n;i++){printf("Element at position %d: %d\n",i+1,arr[i]);}
}