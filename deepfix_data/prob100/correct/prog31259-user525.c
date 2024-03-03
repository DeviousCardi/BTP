#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
        if(a>=b)
        return a;
        if(a<b)
        return b; }
    int min(int a,int b) {
        if(a<=b)
        return a;
        if(a>b)
        return b; }
    int main() {
    int i,j;
    int n,m,l=0;
    scanf("%d %d ",&n,&m);
    int a[m][n];
    int ar[m];
    for(i=1;i<=m;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d ",&a[i][j]); } }
    for(i=1;i<=m;i++) {
       for(j=1;j<=n-1;j++) {
           ar[i]=max(a[i][j],a[i][j+1]); } }
    for(i=1;i<=m-1;i++)
    l=min(ar[i],ar[i+1]);
    printf("%d",l);
    return 0; }