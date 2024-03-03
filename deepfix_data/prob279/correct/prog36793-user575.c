#include <stdio.h>
int main() {
    int n,i,t=0,j,m,k=0;
    scanf("%d",&n);
    int a[n],b[n+1];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n+1;i++) {
        b[i]=0; }
    for(i=1;i<=n;i++) {
        for(j=0;j<n;j++) {
           if(i==a[j])
           t=t+1; }
        b[i]=t;
        printf("%d",b[i]);
        t=0; }
    return 0; }