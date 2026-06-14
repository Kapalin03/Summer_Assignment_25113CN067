#include<stdio.h>
void enter(int arr[],int n);
void binary_search(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    binary_search(arr,n);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
    scanf("%d",&arr[i]);}
}
void binary_search(int arr[],int n){
    int element, low=0, high=n-1, mid, found=0;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            printf("Element found at index %d\n", mid);
            found=1;
            break;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("Element not found in the array.\n");
    }
}