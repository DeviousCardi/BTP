#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a[1000][1000],ar[1000];
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
        scanf("%d ",&a[i][j]); } }
    for(i=0;i<m;i++) {
       int k=a[i][0];
       for(j=0;j<n;j++) {
        if(a[i][j]>k) {
            k=a[i][j]; } }
      ar[i]=k; }
    int k=ar[0];
    for(i=0;i<m;i++) {
        if(ar[i]<k) {
           k=ar[0]; } }
    printf("%d",k);
    return 0; }