#include<stdio.h>
void enter(int n, int m, int arr[n][m]);
void r_sum(int n, int m, int arr[n][m]);
int main(){
    int i,r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter elements of the matrix: \n");
    enter(r,c,arr);
    printf("The row-wise sum is: \n");
    r_sum(r,c,arr);
    return 0;
}
void enter(int n, int m, int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){for(j=0;j<m;j++){printf("Enter element at (%d,%d) index: ",i+1,j+1);
    scanf("%d",&arr[i][j]);}}
}
void r_sum(int n, int m, int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){ int rsum=0;
        for(j=0;j<m;j++){rsum=rsum+arr[i][j];}
        printf("ROW %d: %d.\n",i+1,rsum);}
}