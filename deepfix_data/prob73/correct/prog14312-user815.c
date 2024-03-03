#include <stdio.h>
int main() {
    int n,m,i,j,h,d;
    scanf("%d %d",&n,&m);
    int t[n];
    for(i=0;i<=n-1;i++) {
        t[i]=0;
        j=1;
        while(j<=m) {
            scanf("%d",&h);
            t[i]+=h;
            j++; }
        scanf("\n"); }
    for(i=1;i<=n-1;i++) {
        if(t[i]>t[0]) {
            d=t[i];
            t[i]=t[0];
            t[0]=d; } }
    printf("%d",t[0]);
    for(i=0;i<=n-1;i++)
    printf("%d\n",t[i]);
    return 0; }