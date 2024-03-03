#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a[1000][1000],ar[1000],p=ar[1];
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) {
       for(j=1;j<=n;j++) {
        scanf("%d ",&a[i][j]);
        printf("%d  ",a[i][j]); }
      printf("\n"); }
    for(i=1;i<=m;i++) {
       int k=a[i][1];
       for(j=1;j<=n;j++) {
        if(a[i][j]>a[i][1]) {
            k=a[i][j]; } }
      ar[i]=k;
      printf("%d",k);
      printf("\n"); }
    return 0; }