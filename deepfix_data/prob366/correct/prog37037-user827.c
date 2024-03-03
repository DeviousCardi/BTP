#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[2*n+2],c[n+2];
    for(i=1;i<=2*n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
        for(j=n;j<=2*n;j++) {
            if(a[i]==a[j])
                c[i]=j-i; } }
    for(i=1;i<=n;i++)
        printf("%d ",c[i]);
    return 0; }