#include <stdio.h>
int shift(int a[],int n,int i,int d) {
    int b;
    if((n-d+i)>(n-1))
    b=a[i-d];
    else
    b=a[n-d+i];
    return b; }
int main() {
    int n,k,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        k=shift(a,n,i,d);
        printf("%d ",k); }
    return 0; }