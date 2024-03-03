#include <stdio.h>
int main() {
    int n,m,i,j;
    int g;
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++)
    {g=0;
    for(j=1;j<=m;j++)
        {scanf(" %d",&j);
        g=g+j; }
        printf("%d\n",g); }
    return 0; }