#include <stdio.h>
void printFibonacci(int n);
int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    printFibonacci(num);
    return 0;
}
void printFibonacci(int n) {
    int ft = 0, st = 1, tt, i;
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }
    if (n == 1) {
        printf("0\n");
        return;
    }
    printf("0\n1\n");
    for (i = 3; i <= n; i++) {
        tt = ft + st;
        printf("%d\n", tt);
        ft = st;
        st = tt;
    }
}