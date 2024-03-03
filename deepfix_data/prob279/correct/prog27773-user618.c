#include <stdio.h>
int main() {
    int n,i,b,k;
    scanf("%d\n",&n);
    int a[n];
    scanf("%d ",&a[i]);
     int flag=0;
    for(i=0;i<n;i++) {
        for(int j=n;j>0;j--) {
           if (a[i]==a[j]) {
               flag=1;
                break; } }
        printf("%d\n",a[i]); }
  int s;
  s=(n*(n+1))/2;
  int sum=0;
  for (i=0;i<n;i++) {
      sum=sum+a[i];
      k=s-sum; }
   printf("%d",k);
    return 0; }