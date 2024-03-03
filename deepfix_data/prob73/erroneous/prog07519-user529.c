#include <stdio.h>
int main() {
    int n,m,i,j,g,max=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {   s=0;
        for(j=1,j<=m;j++) {
            scanf("%d",&g);
            s=s+g; }
        if(s>max)
            max=s; }
    printf("%d",max);
    return 0; }