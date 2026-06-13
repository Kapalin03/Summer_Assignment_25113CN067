#include<stdio.h>
void enter(int arr[],int n);
void common_ele(int n,int m, int arr1[],int arr2[]);
int main(){
    int n1,n2;
    printf("Enter the number of elements in array 1: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter elements in ascending order for array 1:\n");
    enter(arr1,n1);
    printf("Enter the number of elements in array 2: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements in ascending order for array 2:\n");
    enter(arr2,n2);
    common_ele(n1,n2,arr1,arr2);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter element number %d:",i+1);
        scanf("%d",&arr[i]);}
}
void common_ele(int n,int m, int arr1[],int arr2[]){
    int i,j,s=0;
    printf("COMMON ELEMENTS:\n");
    for(i=0;i<n;i++){
        if(i > 0 && arr1[i] == arr1[i-1]) {
            continue;}
        s=0;
        for(j=0;j<m;j++){if(arr1[i]==arr2[j]){s++;}}
        if(s>0){printf("%d\n",arr1[i]);}
    }
}