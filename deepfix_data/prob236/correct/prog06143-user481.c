#include <stdio.h>
int main() {
    int n,i,j,x,y,a[n],b[n],c[n];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0; i<n; i++)
    c[b[i]]=a[i];
    for(i=0;i<n;i++)
    printf("%d", c[i]);
        printf("end");
    return 0; }