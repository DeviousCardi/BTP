#include <stdio.h>
int main() {
    int n,m,i,j,c,b;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++) {
        a[i]=0;
        j=1;
        while(j<=m) {
            scanf("%d",&c);
            a[i]+=c;
            j++; }
        scanf("\n"); }
    for(i=1;i<n;i++) {
       if(a[i]>a[0]) {
            b=a[i];
            a[i]=a[0];
            a[0]=b; } }
    printf("%d",a[0]);
    return 0; }