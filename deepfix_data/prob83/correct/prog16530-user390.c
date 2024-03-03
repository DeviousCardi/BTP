#include <stdio.h>
int main() {
    int c[100],n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]); }
    scanf("%d",&k);
    for(i=k;i<n;i++) {
        printf("%d\t",c[i]); }
    for(i=0;i<k;i++) {
        printf("%d\t",c[i]); }
    return 0; }