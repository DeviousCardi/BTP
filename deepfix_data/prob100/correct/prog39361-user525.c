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
    int w;
    int n,m,l=0;
    scanf("%d %d ",&n,&m);
    int a[m][n];
    int ar[m];
    for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
           scanf("%d ",&a[i][j]); } }
    int val=a[0][0];
    for(i=0;i<m;i++)
    { w=a[i][0];
      for(j=0;j<n;j++) {
          w=max(w,a[i][j]); }
        if(i>0) if(val>w) val=w;
        ar[i]=w; }
    printf("%d",val);
    return 0; }