#include <stdio.h>
int main() {
    int a,n,m,i,j,g,s;
    scanf("%d%d",&n,&m);
    a=0;
    for(i=1;i<=n;i++)
    {   s=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&g);
            s=s+g; }
        if(a<s)
        a=s; }
    printf("%d",a);
    return 0; }