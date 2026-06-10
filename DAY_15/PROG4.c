#include<stdio.h>
void enter(int arr[],int n);
void zero_at_end(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    zero_at_end(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void zero_at_end(int arr[],int n){
    int i,arr2[n],k=0;
    for(i=0;i<n;i++){arr2[i]=0;}
    for(i=0;i<n;i++){if(arr[i]!=0){arr2[k]=arr[i];
    k=k+1;}}
    printf("After shifting zeros to end:\n");
    for(i=0;i<n;i++){printf("Element at position %d: %d\n",i+1,arr2[i]);}
}