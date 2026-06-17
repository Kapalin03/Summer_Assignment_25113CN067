#include<stdio.h>
void enter(int n, int m, int arr[n][m]);
void symm(int n,int m, int arr[n][m]);
int main(){
    int i,r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    if(r!=c){printf("Non square matrices cannot be symmetrical.");}
    else{
        printf("Enter elements of the matrix:\n");
        int arr[r][c];
        enter(r,c,arr);
        symm(r,c,arr);
        return 0;
    }
}
void enter(int n, int m, int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){for(j=0;j<m;j++){printf("Enter element at (%d,%d) index: ",i+1,j+1);
    scanf("%d",&arr[i][j]);}}
}
void symm(int n,int m, int arr[n][m]){
    int i,j,s=0;
    int arr2[m][n];
    for(i=0;i<n;i++){for(j=0;j<m;j++){arr2[j][i]=arr[i][j];}}
    for(i=0;i<n;i++){for(j=0;j<m;j++){if(arr[i][j]==arr2[i][j]){s=0;}
    else{s=1;
    break;}}
    if(s==1){break;}}
    if(s==1){printf("Matrix is not symmetric.");}
    else{printf("Matrix is symmetric.");}
    
}