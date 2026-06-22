#include<stdio.h>
void merge_array(int n,int m, int arr1[],int arr2[]);
void enter(int arr[],int n);
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
    merge_array(n1,n2,arr1,arr2);
    return 0;
}
void enter(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter element number %d:",i+1);
        scanf("%d",&arr[i]);}
}
void merge_array(int n,int m, int arr1[],int arr2[]){
    int arr[n+m],i=0,j=0,k=0;
    while((i<n)&&(j<m)){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
        while(i<n){arr[k]=arr1[i];
        k++;
        i++;}
        while(j<m){arr[k]=arr2[j];
        k++;
        j++;}
        printf("MERGED ARRAY:\n");
        for(i=0;i<(n+m);i++){printf("%d  ",arr[i]);}
}