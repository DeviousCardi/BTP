#include <stdio.h>
int main() {
    int n,i,a[100],x,t=0,j,k,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            scanf("%d",&a[i]); }
    for(j=1;j<=n;j++) {
            for(k=j+1;k<=n;k++) {
                    if(a[j]==a[k])
                    y=j;
                    z=k; } }
    x=a[1];
    do {
        t++;
        x=a[x]; }
    while(x!=a[y]);
    printf("%d %d",t+1+(k-j),t+1);
    return 0; }