#include <stdio.h>
int main() {
    int i,j,n,x;
    int count=0;
    int num=0;
    int sum;
    int sum1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
         scanf("%d ",&a[i]);
         sum1=sum1+a[i]; }
     for(i=0;i<n;i++) {
        count=0;
        num=0;
       scanf("%d ",&a[i]);
       num=a[i];
        for(j=n-1;j>=0;j--) {
          if(num==a[j])
          {count=count+1;
          printf("%d",num); }
          if(count==2)
          printf("%d\n",a[i]);break; }
        sum=n*(n+1)/2;
    sum1=sum1-a[i];
    x=sum-sum1;
    printf("%d",x);
  return 0; }