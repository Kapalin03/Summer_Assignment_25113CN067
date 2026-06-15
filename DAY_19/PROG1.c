#include<stdio.h>
void input(int n,int m,int arr[n][m]);
void sum(int n,int m,int arr[n][m],int arr1[n][m]);
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    printf("Enter elemets of matrix 1.\n");
    input(r,c,arr1);
    printf("Enter elements of matrix 2.\n");
    input(r,c,arr2);
    printf("SUM IS: \n");
    sum(r,c,arr1,arr2);
    return 0;
}
void input(int n,int m,int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){for(j=0;j<m;j++){printf("Enter element at row:%d and column:%d: ",i+1,j+1);
    scanf("%d",&arr[i][j]);}}
}
void sum(int n,int m,int arr[n][m],int arr1[n][m]){
    int i,j;
    int arr2[n][m];
    for(i=0;i<n;i++){for(j=0;j<m;j++){arr2[i][j]=arr[i][j]+arr1[i][j];
    printf("%d\t",arr2[i][j]);}
    printf("\n");}}