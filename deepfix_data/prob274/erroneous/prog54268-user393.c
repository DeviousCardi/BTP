#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[100];
    int b[100];
    int c[100];
    a[0]=0;
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]); }
    b[0]=0;
    for(i=1;i<=n;i++) {
        for(k=1;j<=n;k++) {
            if(b[i]==a[k]) {
                for(j=1;j<=n;j++) {
                    if(a[k]==b[j])
                    printf("%d",a[j]-b[k]); } } } }
    return 0; }