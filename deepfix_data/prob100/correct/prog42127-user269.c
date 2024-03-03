#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int m,n,i,j;
      scanf("%d %d",&n,&m);
    int a[m];
   for(i=0;i<n;i++)
    {int k=a[0]-1;
        for(j=0;j<m;j++)
         scanf("%d",a[j]);
          k=max(k,a[j]); }
    return 0; }