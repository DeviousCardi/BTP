#include <stdio.h>
int main() {
    int i,j,sum=0,n,m,max=0,a;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        if(max<sum)
        max=sum; }
    printf("%d",max);
    return 0; }