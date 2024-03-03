#include <stdio.h>
int main() {
    int n,a[200],c[200],i,j,k=0,d[200],t,p;
    scanf("%d",n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n;j++) {
            if(i!=j&&a[i]==a[j]) {
               if(j>i) {
                   c[k]=j-i;
                   d[k]=a[j];
                   k++; } } } }
    t=c[0];
    for(i=0;i<n;i++) {
        if(c[n]<t) {
            t=c[n];
            p=n; } }
    printf("%d",t);
    return 0; }