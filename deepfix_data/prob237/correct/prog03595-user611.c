#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
      int b=0;
      for (int i=l;i<l+r;i++) {
          for (int j=l;j<l+r;j++) {
              if (i<j && arr[i]>arr[j])
              b=b+1; } }
      return b; }
int max(int a, int b) {
    if (a>b)
    return a;
    else
    return b; }
int main() {
   int n,k;
   int a[100];
   scanf("%d%d",&n,&k);
   for (int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for(int i=0;i<n-k+1;i++) {
       a[i]=getInversions(i,k); }
   int c=a[0];
   for (int i=1;i<n-k;i++) {
       c=max(c,a[i]); }
printf("%d",c);
    return 0; }