#include<stdio.h>
void enter(int arr[],int n);
int sum(int arr[],int n);
float average(int arr[],int n);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    printf("Sum of array elements is: %d\n",sum(arr,n));
    printf("Average of array elements is: %f",average(arr,n));
    return 0;
}
int sum(int arr[],int n){int i,s=0;
for(i=0;i<n;i++){s=s+arr[i];}
return s;}
float average(int arr[],int n){int i;
    float avg=0;
for(i=0;i<n;i++){avg=avg+(float)arr[i];}
float a=avg/n;
return a;}
void enter(int arr[],int n){int i;
    for(i=0;i<n;i++){printf("Enter element number %d:",i+1);
    scanf("%d",&arr[i]);}}