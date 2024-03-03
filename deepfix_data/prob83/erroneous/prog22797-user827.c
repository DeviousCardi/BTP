#include <stdio.h>
int main() {
    int n,d,i,j,k;
    scanf("%d",&n);
    int a[n+2];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&d);
    for(i=0;i<1;i++) {
        k=a[0];
        for(j=1;j<n;j++) {
            a[j-1]=a[j] }
        a[j]=k; }
    printf(i=0;i<j;i++) {
        printf("%d ",a[i]); }
    return 0; }