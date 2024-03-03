#include <stdio.h>
int main() {
    int n,a[100],newPos,b[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&newPos);
        b[newPos]=a[i]; }
    for(i=0;i<n;i++) {
        printf("%d ",b[i]); }
    printf("end");
    return 0; }