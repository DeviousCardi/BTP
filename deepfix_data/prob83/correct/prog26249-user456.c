#include <stdio.h>
int shift(int n,int z[]) {
    int j;
    z[0]=z[n-1];
    for(j=1;j<n;j++)
    z[j]=z[j-1];
    return z[n]; }
int main() {
    int n,z[n],i,m,j,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&z[i]);
    scanf("\n%d",&m);
    shift(n,z[n]);
    return z[n];
    return 0; }