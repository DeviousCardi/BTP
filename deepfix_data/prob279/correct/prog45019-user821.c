#include <stdio.h>
int main() {
    int i,j,n,x;
    int count=0;
    int num=0;
    int sum;
    int sum1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
         scanf("%d ",&a[i]); }
     for(i=0;i<n;i++) {
        count=0;
        num=0;
       scanf("%d ",&a[i]);
       num=a[i];
        for(j=n-1;j>=0;j--) {
          if(num==a[j])
          count=count+1; }
          if(count==2)
          printf("%d",a[i]); }
    sum=n*(n+1)/2;
    sum1=sum-a[i];
    sum=sum1+x;
    printf("%d",x);
  return 0; }