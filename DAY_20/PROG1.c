#include<stdio.h>
void enter(int n, int m, int arr[n][m]);
void multiply(int n1, int m1,int n2, int m2,int arr1[n1][m1], int arr2[n2][m2]);
int main()
{
    int r1,r2,c1,c2;
    printf("Enter number of rows of first matrix: ");
    scanf("%d",&r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d",&c1);
    printf("Enter number of rows of second matrix: ");
    scanf("%d",&r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d",&c2);
    if(c1!=r2){printf("Multiplication cannot be done on matrices where c1!=r2.");}
    else{int arr1[r1][c1];
        printf("Enter elements of first matrix: \n");
        enter(r1,c1,arr1);
        int arr2[r2][c2];
        printf("Enter elements of second matrix: \n");
        enter(r2,c2,arr2);
        printf("Multiplication of both matrices is:\n");
        multiply(r1,c1,r2,c2,arr1,arr2);
    }
}
void enter(int n, int m, int arr[n][m]){
    int i,j;
    for(i=0;i<n;i++){for(j=0;j<m;j++){printf("Enter element at index(%d,%d): ",i+1,j+1);
    scanf("%d",&arr[i][j]);}}
}
void multiply(int n1, int m1,int n2, int m2,int arr1[n1][m1], int arr2[n2][m2]){
    int i,j,k,s=0;
    int arr3[n1][m2];
    for(i=0;i<n1;i++){for(j=0;j<m2;j++){arr3[i][j]=0;}}
    for(i=0;i<n1;i++){for(j=0;j<m2;j++){s=0;
    for(k=0;k<m1;k++){s=s+(arr1[i][k]*arr2[k][j]);}
    arr3[i][j]=s;}}
    for(i=0;i<n1;i++){for(j=0;j<m2;j++){printf("%d\t",arr3[i][j]);
    }printf("\n");}
}