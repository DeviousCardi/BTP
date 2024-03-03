#include <stdio.h>
int main() {
    int k,n,i,j,count=0,a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                    if(a[i]+a[j]==k) {
                            count++; } } }
    if(count>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }