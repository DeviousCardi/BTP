#include <stdio.h>
int main() {
    int n,j,i,M=0,m=0;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(a[i]>a[M])
            M=i; }
    for(i=0;i<n;i++) {
        if(a[i]<a[m])
        m=i; }
    a[M]=a[M]+a[m];
    a[m]=a[M]-a[m];
    a[M]=a[M]-a[m];
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }