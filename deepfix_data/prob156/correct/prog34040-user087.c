#include <stdio.h>
int main() {
    int n,m,max=-1,s=0,i,j,a;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            s=0;
            scanf("%d",&a);
            s=s+a;
        };
        if(max<=s)
        max=s; }
    printf("%d",max);
    return 0; }