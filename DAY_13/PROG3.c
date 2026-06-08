#include<stdio.h>
void enter(int arr[],int n);
void largest_and_sl(int arr[],int n);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    largest_and_sl(arr,n);
    return 0;
}
void largest_and_sl(int arr[],int n){int i,s=arr[0],sl=arr[0];
for(i=0;i<n;i++){if(arr[i]>s){s=arr[i];};}
printf("Largest element is: %d\n",s);
for(i=0;i<n;i++){if((arr[i]>sl)&&(arr[i]<s)){sl=arr[i];}}
printf("Second largest element is: %d",sl);}
void enter(int arr[],int n){int i;
    for(i=0;i<n;i++){printf("Enter element number %d:",i+1);
    scanf("%d",&arr[i]);}}