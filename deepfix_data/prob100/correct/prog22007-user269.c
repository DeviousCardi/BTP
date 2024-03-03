#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int m,n,i,j,k;
      scanf("%d %d",&n,&m);
    int a[n];
   for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]);
            int k=a[0]-1;
             k=max(k,a[j]); }
          printf("%d\n",k); }
    return 0; }