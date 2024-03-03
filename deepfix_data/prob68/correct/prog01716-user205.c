#include<stdio.h>
int main() {
    int p = 1;
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    p = product(a,0,n,p);
    printf("%d", p);
    return 0; }
int product(int a[], int index, int size, int pro) {
    if(index==size)
        return pro;
    return (pro*a[index++]); }