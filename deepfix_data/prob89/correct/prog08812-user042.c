#include <stdio.h>
int main() {
    int k,i,j,a[100],n;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==k) {
                printf("lucky");
                break; } }
        if(j<n)
            break; }
    if(i>=n-1)
        printf("unlucky");
    return 0; }