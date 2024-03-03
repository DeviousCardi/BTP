#include <stdio.h>
int main() {
     int n,i,k=0,j;
      scanf("%d",&n);
     int x[n];
      for(i=0;i<n;i++) {
           scanf("%d",&x[i]); }
     for(i=0;i<n;i++)
     {for(j=1;j<=n-i;j++)
      if(x[i]==x[i+j]);
      k++;}
    return 0; }