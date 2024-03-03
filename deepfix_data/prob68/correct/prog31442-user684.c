#include<stdio.h>
long double prod(int a[],int n) {
    if(n==1)
        return a[n-1];
    return a[n-1]*prod(a,n-1); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%.0lf",prod(a,n));
    return 0; }