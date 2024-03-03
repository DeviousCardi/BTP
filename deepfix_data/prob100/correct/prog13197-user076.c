#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a[1000][1000],ar[1000],p=ar[1];
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) {
       for(j=1;j<=n;j++) {
        scanf("%d ",&a[i][j]); } }
    for(i=1;i<=m;i++) {
       int k=a[i][1];
       for(j=1;j<=n;j++) {
        if(a[i][j]>a[i][1]) {
            k=a[i][j]; } }
      ar[i]=k;
      printf("%d",k); }
    int k=ar[1];
    for(i=1;i<=m;i++)
    {     int k=ar[1];
        if(ar[i]<ar[1]) {
           k=ar[i]; } }
    printf("%d",k);
    return 0; }