#include<stdio.h>
void enter(int arr[], int n);
void dupe(int arr[], int n);
int main()
{int n;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
enter(arr, n);
dupe(arr, n);
return 0;}
void enter(int arr[], int n)
{int i;
for(i = 0; i < n; i++) {printf("Enter element at no %d: ", i + 1);
scanf("%d", &arr[i]);}}
void dupe(int arr[], int n)
{int i, j;
for(i = 0; i < n; i++)
{if (arr[i] == -1) {continue;}
int a = arr[i];
int s = 0;        
for(j = i; j < n; j++) {
if(arr[j] == -1) {continue;}
else {if(arr[j] == a) {s = s + 1;
arr[j] = -1; }}}
if(s>1){printf("%d has %d duplicate/s.\n",a,s-1);}}}