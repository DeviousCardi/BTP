#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    int max;
    scanf("%d %d",&n,&m);
    int a[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
           scanf("%d",&a[i][j]); } }
    max=a[0][0];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
         if(a[0][0]<a[i][j])
          a[0][0]=a[i][j]; }
    } printf("%d",a[0][0]);
    return 0; }