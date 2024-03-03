#include <stdio.h>
int rec_sum(int arr[], int n) {
      int sum=0;
      if (n<0) {
      return 0; }
       else {
           sum=sum+arr[n-1]+rec_sum(arr,n-1); }
  return (sum); }
int main() {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++) {
             scanf("%d",&arr[i]); }
        int sum;
        sum=rec_sum(arr,n);
                printf("%d",sum); }