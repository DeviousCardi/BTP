#include <stdio.h>
long rec_sum(long long arr[], long n) {
      long sum=0;
      if (n<0) {
      return 0; }
       else {
           sum=sum+arr[n-1]+rec_sum(arr,n-1); }
  return (sum); }
int main() {
        long n;
        scanf("%d", &n);
        long long arr[n];
        for(int i=0;i<n;i++) {
             scanf("%lli",&arr[i]); }
        long sum;
        sum=rec_sum(arr,n);
                printf("%d",sum); }