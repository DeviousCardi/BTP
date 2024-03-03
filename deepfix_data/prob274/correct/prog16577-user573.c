#include <stdio.h>
int main() {
    int n,i,a[100],x,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            scanf("%d",&a[i]); }
    x=a[1];
    do {
        t++;
        x=a[x]; }
    while(x!=a[1]);
    printf("%d %d",t+1,t);
    return 0; }