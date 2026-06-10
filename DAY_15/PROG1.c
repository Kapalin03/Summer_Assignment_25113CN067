#include<stdio.h>
#include<math.h>
void enter(int arr[],int n);
void reverse(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    reverse(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void reverse(int arr[],int n){
    int i;
    for(i=0;i<(int)round(n/2);i++)
    {int t=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=t;}
    for(i=0;i<n;i++){
        printf("Element no %d in reversed array: %d\n",i+1,arr[i]);
    }
}