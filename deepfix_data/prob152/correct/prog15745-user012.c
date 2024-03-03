#include <stdio.h>
int sum(long int a[100],int start,int end) {
    if(end==start)
    return a[start];
    else
    return a[end-1]+sum(a,start,end-1); }
int main() {
   int n;
   scanf("%d",&n);
   long int a[100];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   int sum1=sum(a,0,n/2);
   int sum2=sum(a,n/2,n);
   if(sum1==sum2)
   printf("YES");
   else
   printf("NO");
    return 0; }