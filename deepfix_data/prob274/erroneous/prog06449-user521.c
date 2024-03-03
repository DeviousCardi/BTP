#include <stdio.h>
int main(){
   int n,i,j=1,z=1,w=1,k,count=0;
   scanf("%d",&n);
   int a[n],count2[2],c[n];
   for(i=1;i<=n;i++) {
       scanf("%d",&a[i]); }
  for(i=1;i<=n;i++) {
      for(j=1;j<=n;j++) {
          if(a[i]==j) {
              k=a[j];
              count=count+1;
              k=c[z];
              z++; }
      }i=j; {
      if((i==1)&&(w<3)) {
          count2[w]=count+1;
          w++; } }
   printf("%d",count2[1]);
   printf(" %d",count2[2]-count2[1]);
    return 0; }