#include <stdio.h>
int main() {
    int i,n,l,d,j=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    scanf("%d",&d);
    l=(n-d);
    while(j<n) {
        l=l%n;
        printf("%d ",a[l]);
        l++;
        j++; }
    return 0; }