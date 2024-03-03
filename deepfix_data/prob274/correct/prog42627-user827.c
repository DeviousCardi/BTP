#include <stdio.h>
int main() {
    int n,i,j,k=0,c,d;
    scanf("%d",&n);
    int a[n+2],b[500];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    j=1;
    for(i=0;i<10;i++) {
        b[i]=j;
        j=a[j]; }
    for(i=0;i<10;i++) {
        printf("%d",b[i]); }
    return 0; }