#include <stdio.h>
int main() {
    int n,a[200],c[200],i,j,k=0,t;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n;j++) {
            if(i!=j&&a[i]==a[j]) {
               if(j<i) {
                   c[k]=i-j; }
               else {
                   c[k]=j-i; }
               k++; } } }
    t=c[0];
    for(i=0;i<n;i++) {
        if(c[i]<t) {
            t=c[i]; } }
    printf("%d",t);
    return 0; }