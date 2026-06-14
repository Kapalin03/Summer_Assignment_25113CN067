#include<stdio.h>
void enter(int arr[],int n);
void selection_sort(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    selection_sort(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void selection_sort(int arr[],int n){
    int i,j,min_idx,temp;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
    printf("After Selection Sort (Ascending):\n");
    for(i=0;i<n;i++){printf("Element at position %d: %d\n",i+1,arr[i]);}
}