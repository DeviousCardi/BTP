#include <stdio.h>
int main() {
    int n,m,sum=0,max=0;scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {sum=0;
        for(int j=0;j<m;j++)
    {scanf("%d",&a[i][j]);
    sum+=a[i][j]; }
    if(sum>max)
    max=sum; }
    printf("%d",max);
    return 0; }