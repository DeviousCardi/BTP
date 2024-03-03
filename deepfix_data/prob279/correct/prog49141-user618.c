#include <stdio.h>
int main() {
    int n,i,b,k;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++)
     {scanf("%d",&a[i]); }
     int flag=0;
    for(i=0;i<n;i++) {
        b=a[i];
        for(int j=n;j>0;j--) {
               a[j]=b;
               flag=flag+1;
               if (flag==2) {
                   printf("%d\n",b); } } }
  int s;
  s=(n*(n+1))/2;
  int sum=0;
  for (i=0;i<n;i++) {
      sum=sum+a[i];
      k=s-sum; }
   printf("%d",k);
    return 0; }