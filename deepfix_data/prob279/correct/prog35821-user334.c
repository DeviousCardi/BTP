#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int u;
    int a[n];
    for (u=0;u<=n-1;u++) {
        scanf("%d",&a[u]); }
    int i,j;
    for(i=0;i<=n-1;i++) {
        for(j=0;j<=n-1;j++) {
            if(a[i]==a[j]) {
                printf("%d\n",a[i]);
                break; } }
        if(j!=n-1) {
            break; } }
    return 0; }