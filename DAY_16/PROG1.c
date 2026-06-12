// Online C compiler to run C program online
#include <stdio.h>
void enter(int n,int arr[]);
void missing(int n,int arr[]);
int main() {int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    int arr[num];
    enter(num,arr);
    missing(num,arr);
    return 0;
}
void enter(int n,int arr[]){
    int i;
    for(i=0;i<n-1;i++){printf("Enter term %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void missing(int n,int arr[]){
    int i;
    for(i=0;i<n-1;i++){if(arr[i]!=i+1){printf("Missing element is: %d.",i+1);
        break;
    }}
}