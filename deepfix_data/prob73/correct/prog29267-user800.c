#include <stdio.h>
int main() {
    int n,m;
    int max=0,a=0;
    int i,j;
    int t;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&t);
            a+=t; }
        if(a>max)
        max=a;
        a=0; }
    printf("%d",max);
    return 0; }