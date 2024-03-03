#include <stdio.h>
int main() {
    int i, j, n, m, arr[25][50], sum[25], max;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;++j)
        {  scanf("%d",&arr[i][j]);
           sum[i]+=arr[i][j]; } }
    max=sum[0];
    for(i=0;i<n;i++) {
        if(sum[i]>max)
           max=sum[i]; }
    printf("%d",max);
    return 0; }