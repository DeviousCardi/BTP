#include <stdio.h>
int main() {
    int n,i,j,k,b;
    int a[400];
    scanf("%d",&n);
    int m=2*n;
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<2*n;j++) {
        k=a[j];
        for(b=0;b<2*n;b++) {
            if(b!=j) {
                if(k==a[b]) {
                    if((b-j)<=m&&(b-j)>0) {
                        m=b-j; } } } } }
    printf("%d",m);
    return 0; }