#include<stdio.h>
void input(int n,int m,int arr[n][m]);
void transpose(int n,int m,int arr[n][m]);
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr1[r][c];
    printf("Enter elemets of matrix.\n");
    input(r,c,arr1);
    printf("TRANSPOSE IS: \n");
    transpose(r,c,arr1);
    return 0;
}
void input(int n,int m,int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){for(j=0;j<m;j++){printf("Enter element at row:%d and column:%d: ",i+1,j+1);
    scanf("%d",&arr[i][j]);}}
}
void transpose(int n,int m,int arr[n][m]){
    int i,j;
    int arr2[n][m];
    for(i=0;i<n;i++){for(j=0;j<m;j++){arr2[i][j]=arr[j][i];
    printf("%d\t",arr2[i][j]);}
    printf("\n");}}