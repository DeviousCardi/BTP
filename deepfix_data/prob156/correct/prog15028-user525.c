#include <stdio.h>
int main() {
    int n,m;
    int a,sum;
    int l=0,k=0;
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {   l=0;
        for(j=1;j<=m;j++)
        {scanf("%d ",&a);
            l=l+a; }
        if(k<=l)
        k=l; }
    return 0; }