#include<stdio.h>
void enter(int arr[],int n);
void linear_s(int arr[],int n,int num);
int main()
{
    int n,num;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    enter(arr,n);
    printf("Enter the element to be searchd: ");
    scanf("%d",&num);
    linear_s(arr,n,num);
    return 0;
}
void enter(int arr[],int n)
{int i;
for(i=0;i<n;i++){printf("Enter element no %d: ",i+1);
scanf("%d",&arr[i]);}}
void linear_s(int arr[],int n,int num)
{int i,s=0;
for(i=0;i<n;i++){if(arr[i]==num){printf("Element %d found at %d index.",num,i);
s=1;
break;}}
if(s==0){printf("Element not found.");}}