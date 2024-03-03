#include <stdio.h>
int main() {
    int k,n=0,i,j;
    int a[n];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    }for(i=0;i<n-1;i++) {
        for(j=0;j<n;j++) {
            if(a[i]+a[j]==k) {
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }