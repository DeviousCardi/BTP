#include<stdio.h>
#include<strings.h>
int getReverse(int[]);
int main() {
   int n,rev,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++) {
    scanf("%d",&ar[n]); }
  for(i=0;i<=n;i++) {
    rev = getReverse(ar[n]);
    printf("%d",rev); }
    return 0; }
  int n;
  int getReverse(int ar[n]) {
     int i,n,rev;
      if(i<n){
          rev = getReverse(ar[n]); }
      return rev; }