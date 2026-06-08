#include<stdio.h>
void enter(int arr[],int n);
void odd_even(int arr[],int n);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    odd_even(arr,n);
    return 0;
}
void odd_even(int arr[],int n){int i;
for(i=0;i<n;i++){if(arr[i]%2==0){printf("Even element found: %d\n",arr[i]);}
else{printf("Odd element found: %d\n",arr[i]);}}}
void enter(int arr[],int n){int i;
    for(i=0;i<n;i++){printf("Enter element number %d:",i+1);
    scanf("%d",&arr[i]);}}