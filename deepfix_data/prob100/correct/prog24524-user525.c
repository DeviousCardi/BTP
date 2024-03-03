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
    int n,m,l;
    scanf("%d %d ",&n,&m);
    int a[n][m];
    int ar[m];
    for(i=1;i<=m;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d ",&a[i][j]); } }
    for(i=1;i<=m;i++) {
       for(j=1;j<=n-1;j++) {
           ar[i]=max(a[j],a[j+1]); } }
    for(j=1;j<=m-1;j++)
    l=min(ar[j],ar[j+1]);
    printf("%d",l);
    return 0; }