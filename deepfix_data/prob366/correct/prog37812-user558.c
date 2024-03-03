#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=n;j<2*n;j++) {
            if(a[i]==a[j])
            printf("%d %d",i,j); } }
    return 0; }