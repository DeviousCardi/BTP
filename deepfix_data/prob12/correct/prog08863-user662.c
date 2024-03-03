#include <stdio.h>
int main() {
    int n,i,j,l=0;
    int  a[i];
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]);
    }for(i=0;i<2*(n-1);i++) {
        for(j=0;j<2*n;j++) {
            if(a[i]==a[j]) {
                i-j<l; } } }
        printf("%d",l);
    return 0; }