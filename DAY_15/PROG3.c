#include<stdio.h>
void enter(int arr[],int n);
void shift_right(int arr[],int n,int k);
int main()
{
    int n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    printf("Enter number of right rotations: ");
    scanf("%d",&k);
    shift_right(arr,n,k);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void shift_right(int arr[],int n,int k)
{
    int i,j;
    for(i=0;i<k;i++){int t=arr[n-1];
    for(j=n-1;j>=0;j--){arr[j]=arr[j-1];}
    arr[0]=t;}
    for(i=0;i<n;i++){printf("Element at position %d: %d\n",i+1,arr[i]);}
}