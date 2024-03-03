#include <stdio.h>
int main() {
    int n,z[n],i,m;
    scanf("%d\n",&n)
    for(i=0;i<n;i++)
    scanf("%d ",&z[i]);
    scanf("\n%d",&m);
    for(j=1;j<=m;j++) {
        z[0]=z[n-1]; {
            for(k=0;k<n;k++)
            z[k]=z[k-1]; } }
    printf("%d ",z[n]);
    return 0; }