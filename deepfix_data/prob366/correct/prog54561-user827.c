#include <stdio.h>
int main() {
    int n,i,j,s;
    scanf("%d",&n);
    int a[2*n+2],c[n+2];
    for(i=1;i<=2*n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
        for(j=n;j<=2*n;j++) {
            if(a[i]==a[j])
                c[i]=j-i; } }
    s=c[0];
    for(i=1;i<=n;i++) {
        if(s>c[i])
            s=c[i]; }
    printf("%d",c);
    return 0; }