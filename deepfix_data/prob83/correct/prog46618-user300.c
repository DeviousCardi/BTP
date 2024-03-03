#include <stdio.h>
int a[10000],i,k,j,b,n;
void rot(int a[100000],int n, int k) {
    while(k>0) {
        b=a[n-1];
        for(j=n-1;j>0;j--) {
            a[j]=a[j-1]; }
        a[j]=b;
        k--; } }
int main() {
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("\n%d",&k);
    rot(a,n,k);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }