#include <stdio.h>
int arr[100]={0};
int i,n,k;
int getMaxLessThan(int upperLimit) {
    int sum=0,i,p,t=0;
    for(i=0;i<n;i++) {
        sum= sum + arr[i]; }
    sum=sum-upperLimit;
    for(i=0;i<n;i++) {
        p=sum-arr[i];
        if(t<p)
        t=p; }
    t=sum-t;
    return t; }
int main() {
    int b=0,i,m;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      if(arr[i]>b)
      b=arr[i]; }
  printf("%d\n",b);
    for(i=0;i<n;i++) {
        m=getMaxLessThan(b);
        printf("%d\n",m);
        b=b+m; }
    return 0; }