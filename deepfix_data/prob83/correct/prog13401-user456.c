#include <stdio.h>
int main() {
    int n,z[n],i,m,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&z[i]);
    scanf("\n%d",&m);
    for(j=0;j<n;j++)
    printf("%d ",z[j]);
    return 0; }