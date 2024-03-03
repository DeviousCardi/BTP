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
    int m,n,i,j,l=100000;
      scanf("%d %d",&n,&m);
    int a[n],b[m];
   for(i=0;i<m;i++)
    {int k=-1000000;
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]);
             k=max(k,a[j]); }
          b[i]=k;printf("%d\n",b[i]); }
    for(i=0;i<m;i++) {
     l=min(l,b[i]); }
    printf("%d",l);
    return 0; }