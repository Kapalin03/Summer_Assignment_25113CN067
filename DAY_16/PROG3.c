#include<stdio.h>
void enter(int n,int arr[]);
void pair_sum(int n, int arr[], int sum);
int main(){int num,sum;
printf("Enter the number of terms: ");
scanf("%d",&num);
int arr[num];
enter(num,arr);
printf("Enter the target sum: ");
scanf("%d",&sum);
pair_sum(num,arr,sum);
return 0;
}
void enter(int n,int arr[]){
    int i;
    for(i=0;i<n;i++){printf("Enter term %d: ",i+1);
        scanf("%d",&arr[i]);}}
void pair_sum(int n, int arr[],int sum){
    int i,j,a;
    for(i=0;i<n;i++){a=arr[i];
    for(j=i+1;j<n;j++){if(a+arr[j]==sum){printf("Pair found: %d and %d.\n",a,arr[j]);}}}
}