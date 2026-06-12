#include<stdio.h>
void enter(int n,int arr[]);
void freq(int n,int arr[]);
int main(){int num;
printf("Entter number of terms: ");
scanf("%d",&num);
int arr[num];
enter(num,arr);
freq(num,arr);
return 0;}
void enter(int n,int arr[]){
    int i;
    for(i=0;i<n;i++){printf("Enter term %d: ",i+1);
        scanf("%d",&arr[i]);}}
void freq(int n,int arr[]){int i,s,a,j;
    int arr2[n];
    for(i=0;i<n;i++){if(arr[i]==-1){continue;}
    a=arr[i];
    s=0;
    for(j=i;j<n;j++){
    if(arr[j]==-1){continue;}
    else{if(arr[j]==a){s=s+1;
    arr[j]=-1;}}}
    printf("%d occurs %d times.\n",a,s);
}
}