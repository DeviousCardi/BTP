#include <stdio.h>
int main() {
    int n,m,a,i,j,s=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d\n",&a); } }
    for(i=1;i<n;i++) {
        for(j=1;j<m;j++) {
            a=a+s;
            s=a;
            printf("%d",s); } }
    return 0; }