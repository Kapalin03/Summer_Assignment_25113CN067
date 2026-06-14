#include<stdio.h>
void enter(int arr[],int n);
void bubble_sort(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    bubble_sort(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After Bubble Sort (Ascending):\n");
    for(i=0;i<n;i++){printf("Element at position %d: %d\n",i+1,arr[i]);}
}