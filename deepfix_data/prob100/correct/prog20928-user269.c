#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b) {
    if(a>b)
    return b;
    else
    return a; }
int main() {
    int m,n,i,j,k=-10000000;
      scanf("%d %d",&n,&m);
    int a[n],b[m];
   for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]);
             k=max(k,a[j]); }
          k=b[i]; }
    for(i=0;i<m;i++) {
    k=min(k,b[i]);
    printf("%d",k); }
    return 0; }