#include <stdio.h>
int main() {
    int n,m,i,j,a[100][100],sum[100],l;
    scanf("%d %d",&n,&m);
  for(i=0;i<n;i++) {
           sum[i]=0;
             for(j=0;j<m,j++) {
                      scanf("%d ",&a[i][j]);
                      sum[i]=sum[i]+a[i][j]; }
            printf("\n"); }
    l=sum[0];
  for(i=o;i<n;i++) {
           if(l<sum[i]) {
                  l=sum[i]; } }
    printf("\n%d"&l);
    return 0; }