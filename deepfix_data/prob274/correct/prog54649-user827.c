#include <stdio.h>
int main() {
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n+2],b[500],c[n+2];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    j=1;
    for(i=0;i<100;i++) {
        b[i]=j;
        j=a[j]; }
    for(i=1;i<=n;i++) {
        for(j=0;j<100;j++) {
            if(a[i]==b[j]) {
                k++; }
            if(k==2) {
                c[i]=j;
                k=0;
                printf("%d ",c[i]);
                break; } } }
    return 0; }