#include <stdio.h>
int main() {
    int n,m,i,j;
    int g;
    g=0;
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
        {scanf("%d",&j);
        g=g+j;
        printf("%d",j); } }
    return 0; }