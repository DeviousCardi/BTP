#include <stdio.h>
int max(int a,int b) {
    int max;
    if(a>b)
    max=a;
    else
    max=b;
    return max; }
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    int a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
        scanf("/n"); }
    int sum=0;
    int b[n];
    for(i=0;i<n;i++) {
       for(j=0;j<m;j++) {
           sum=sum+a[i][j]; }
       b[i]=sum; }
    int mx=0;
    for(i=0;i<n-1;i++) {
        mx=max(mx,b[i]); }
    printf("%d",mx);
    return 0; }