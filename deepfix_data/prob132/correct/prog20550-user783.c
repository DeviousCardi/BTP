#include <stdio.h>
int main() {
    int i,n,a[999999];
    char b[999999];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d %c",&a[i],b[i]); }
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }