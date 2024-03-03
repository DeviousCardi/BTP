#include<stdio.h>
int product(int[], int, int, long);
int main() {
    long p = 1;
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    p = product(a,0,n,p);
    printf("%ld", p);
    return 0; }
int product(int a[], int index, int size, long pro) {
    if(index==size)
        return pro;
    return (pro*a[index++]); }