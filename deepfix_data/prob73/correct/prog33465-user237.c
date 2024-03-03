#include <stdio.h>
int main() {
    int k,i,n,j,m;
    scanf("%d %d\n",&n,&m);
    int a[n][m+1];
    for(i=0;i<n;i++)
    {   a[i][m]=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
            a[i][m]+=a[i][j]; } }
    k=a[0][m];
    for(i=1;i<n;i++) {
        if(a[i][m]>k)
        k=a[i][m]; }
    printf("%d",k);
    return 0; }