#include <stdio.h>
int main() {
    int n,m,i,j,a,s,max;
    scanf("%d%d",&n,&m);
    a=0;
    max=0;
    for(i=0;i<n;i++) {
        s=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            s=s+a; }
        if(max<=s) {
            max=s; } }
    printf("%d",max);
    return 0; }