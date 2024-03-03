#include <stdio.h>
long int sum(long int a[100],int start,int end) {
    if(end-1==start)
    return a[start];
    else
    return sum(a,start,end-1)+a[end-1]; }
int main() {
   int n;
   scanf("%d",&n);
   long int a[100];
   for(int i=0;i<n;i++)
   scanf("%ld",&a[i]);
   int t=0;
   for(int i=1;i<=n-1;i++) {
     long int sum1=0;
      long int sum2=0;
      sum1=sum(a,0,i);
      sum2=sum(a,i,n);
      if(sum1==sum2) {
          printf("YES");
          break; }
      if(sum1!=sum2)
      t=t+1; }
   if(t==n-1)
   printf("NO");
  return 0; }