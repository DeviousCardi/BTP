#include <stdio.h>
int main() {
   int n,k,i,total=0,oldcount;
   scanf("%d%d",&n,&k);
   int num[n],output[n];
   for(i=0;i<n;i++)
   scanf("%d",&num[i]);
   int count[k];
   for(i=0;i<k;i++)
   count[i]=0;
   for(i=0;i<n;i++)
   count[num[i]]++;
   for(i=0;i<k;i++) {
       oldcount=count[i];
       count[i]=total;
       total+=oldcount; }
   for(i=0;i<n;i++) {
      oldcount=num[i];
      output[count[oldcount]]=oldcount;
      count[oldcount]+=1; }
  for(i=0;i<n;i++)
  printf("%d",output[i]); }