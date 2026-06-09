#include<stdio.h>
void sl(int arr[],int n);
void enter(int arr[],int n);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    sl(arr,n);
    return 0;
}
void enter(int arr[],int n)
{int i;
for(i = 0; i < n; i++) {printf("Enter element at no %d: ", i + 1);
scanf("%d", &arr[i]);}}
void sl(int arr[],int n){
    int i,l=arr[0],sl=arr[0];
    for(i=0;i<n;i++){if(arr[i]>l){l=arr[i];}}
    for(i=0;i<n;i++){if((arr[i]<l)&&(arr[i]>sl)){sl=arr[i];}}
    printf("Second largest element: %d.",sl);
}
