#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int h;
    scanf("%d",&h);
    for(int i=1;i<=n;i=i+1) {
        int l=0;
        for(int j=1;j<=m;j=j+1) {
            h=h+l;
            l=h;
            scanf("%d",&h); } }
    printf("%d",h);
    return 0; }