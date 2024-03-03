#include <stdio.h>
long int sum(long int a[100],int start,int end) {
    if(end==start)
    return a[start];
    else
    return sum(a,start,end-1)+a[end-1]; }
int main() {
   int n;
   scanf("%d",&n);
   long int a[100];
   for(int i=0;i<n;i++)
   scanf("%ld",&a[i]);
   long int sum1=sum(a,0,n/2);
   long int sum2=sum(a,n/2,n);
   printf("%ld %ld",sum1,sum2);
   if(sum1==sum2)
   printf("YES");
   else
   printf("NO");
    return 0; }