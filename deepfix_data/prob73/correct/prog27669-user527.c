#include <stdio.h>
int main() {
    int n,m,a[10][10],sum[10],i,j,temp=-1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
            printf("\n"); }
    for(i=0;i<n;i++) {
            sum[i]=0;
            for(j=0;j<m;j++)
            sum[i]+=a[i][j]; }
    for(i=0;i<n;i++)
        if(temp<sum[i]) {
                    temp=sum[i]; }
    printf("%d",sum);
    return 0; }