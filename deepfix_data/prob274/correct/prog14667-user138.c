#include <stdio.h>
int main() {
    int n,i,x,j,k;
    scanf("%d",&n);
    int a[n],b[2*n];
    for(i=1;i<=n;i++) {
        scanf("%d",&x);
        a[i]=x;
        if(i==n) {
        for(j=1;j<=2*n;j++) {
             b[j]=j;
             b[j++]=a[i]; } }
        for(j=1;j<=2*n;j++) {
            for(k=1;k<2*n;k++) {
               if(b[j]==b[j+k]) {
                printf("%d %d",j+k-1,j+k-2); } } } }
    return 0; }