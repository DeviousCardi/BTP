#include <stdio.h>
int main() {
    int n,a[100],k,i,j;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i!=j) {
                if(a[i]+a[j]==k) {
                    printf("lucky");
                    return 0; } } } }
    printf("unlucky");
    return 0; }