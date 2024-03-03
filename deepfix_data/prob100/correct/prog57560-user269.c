#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,l=1000000000;
      scanf("%d %d",&n,&m);
    int a[n],b[m];
   for(i=0;i<m;i++) {
          int k=-1000000;
           for(j=0;j<n;j++) {
              scanf("%d",&a[j]);
               if(k<a[j])
               k=a[j]; }
       b[i]=k; }
      for(i=0;i<m;i++) {
          if(l>b[i])
          l=b[i]; }
      printf("%d",l);
     return 0; }