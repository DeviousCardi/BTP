#include <stdio.h>
int main() {
    int n,m,i,j,sum=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++) {
           for(j=0;j<m;j++) {
                  scanf("%d",&a[n][m]); } }
    for(i=0;i<n;i++) {
           for(j=0;j<i;j++) {
                  sum=sum+a[n][m]; } }
    printf("%d",sum);
    return 0; }