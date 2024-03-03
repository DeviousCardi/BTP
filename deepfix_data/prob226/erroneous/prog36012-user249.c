#include <stdio.h>
int main() {
    int b,N,i;
    scanf("%d%d",&b,&N);
    int b[d];
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    int a[N];
    for(i=0;i<d;i++)
        a[i]=b[i];
    int a[d]=0;
    for(i=0;i<d;i++)
        a[d]=a[d]+b[i];
    for(i=d+1;i<=N;i++) {
        a[i]=2*a[i-1]-a[i-d-1] }
    printf("%d",a[N]);
    return 0; }