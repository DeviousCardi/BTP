#include <stdio.h>
int main() {
    int n,d,i,j,k;
    scanf("%d",&n);
    int a[n+2];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=0;i<1;i++) {
        k=a[n-1];
        for(j=n-1;j>0;j--) {
            a[j]=a[j-1]; }
        a[0]=k; }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }