#include<stdio.h>
void enter(int n,int arr[]);
void dupe(int n,int arr[]);
int main(){int num;
printf("Entter number of terms: ");
scanf("%d",&num);
int arr[num];
enter(num,arr);
dupe(num,arr);
return 0;}
void enter(int n,int arr[]){
    int i;
    for(i=0;i<n;i++){printf("Enter term %d: ",i+1);
        scanf("%d",&arr[i]);}}
void dupe(int n,int arr[]){int i,a,j;
    for(i=0;i<n;i++){if(arr[i]==-1){continue;}
    a=arr[i];
    for(j=i+1;j<n;j++){
    if(arr[j]==-1){continue;}
    else{if(arr[j]==a){
    arr[j]=-1;}}}}
    printf("After removing duplicacy: \n");
    for(i=0;i<n;i++){if(arr[i]!=-1){printf("%d\n",arr[i]);}}

}