#include <stdio.h>
int main() {
    int c[100],n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%c",&c[i]); }
    scanf("%d",&k);
    for(i=k;i<n;i++) {
        printf("%c",c[i]); }
    return 0; }