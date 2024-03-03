#include <stdio.h>
int main() {
    int n,m=0;
    scanf("%d",&n);
    int g[2*n],d[n];
    for(int i=0;i<2*n;i++)
        scanf("%d",&g[i]);
    for(int i=1;i<=n;i++) {
        int a=0,b=0;
        for(int j=0;j<2*n;j++) {
            if(a==0&&g[j]==i)
                a=i;
            else if(g[j]==i) {
                b=j;
                break; } }
        d[i-1]=b-a; }
    for(int i=0;i<n;i++) {
        if(d[i]<d[m])
            m=i; }
    printf("%d",d[m]); }