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
    int a[n];
   for(i=0;i<m;i++)
    {  int k;
        for(j=0;j<n;j++)
        { scanf("%d",&a[j]);
          k=max(k,a[j]);}
          printf("%d\n",k); }
    return 0; }