#include <stdio.h>
int main() {
  int n,i,k,l,j,count,min;
  int a[100];
  count=0;
  min=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
     scanf("%d",&a[i]); }
   for(i=0;i<n;i++) {
       a[i]=k;
      for(j=0;j<n;j++) {
           a[k-1]=l;
           k=l-1;
           count=count+1;
           if(a[k]==a[i])
           {break; } }
       min=count;
       count=0;
       if(count==0) {
         t=i;
         break; } }
   printf("%d",min);
    return 0; }