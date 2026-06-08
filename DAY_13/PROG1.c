#include<stdio.h>
void enter(int arr[],int n);
void display(int arr[],int n);
int main()
{int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    display(arr,n);
    return 0;
}
void enter(int arr[],int n){int i;
    for(i=0;i<n;i++){printf("Enter element number %d:",i+1);
    scanf("%d",&arr[i]);}
}
void display(int arr[],int n){int i;
for(i=0;i<n;i++){printf("Element number %d: %d \n",i+1,arr[i]);}}