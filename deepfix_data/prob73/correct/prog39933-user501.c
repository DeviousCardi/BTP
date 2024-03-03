#include <stdio.h>
int main() {
      int n,m,i,j,h,d;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<=n-1;i++) {
        a[i]=0;
        j=1;
        while(j<=m) {
            scanf("%d",&h);
            a[i]+=h;
            j++; }
        scanf("\n"); }
    for(i=1;i<=n-1;i++) {
        if(a[i]>a[0]) {
            d=a[i];
            a[i]=a[0];
            a[0]=d; } }
    printf("%d",a[0]);
    return 0; }