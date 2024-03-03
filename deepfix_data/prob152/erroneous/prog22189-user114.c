#include <stdio.h>
int check(sum,n,ar[]) {
    if(sum==0) return 1;
    if(sum<0)return 0;
    else
    return check(sum-ar[n-1],n-1,ar)||check(sum,n-1,ar); }
int main() {
    int n;
    scanf("%d",&n);
    int ar[n],sum=0;
    for(int i=0;i<n;i++) {
    scanf("%d",&ar[i]);
    sum=sum+ar[i]; }
   if(sum%2!=0) {
       printf("NO"); }
   else {
      int h = check(sum/2,n,ar);
      if(h==1)
      printf("YES");
      else
      printf("NO"); }
    return 0; }