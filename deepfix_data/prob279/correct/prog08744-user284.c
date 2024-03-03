#include <stdio.h>
int a[100];
int count(int,int);
int count(int m,int n) {
int i;
int d=0;
for(i=0;i<n;i++) {
    if(m==a[i]) {
        d=d+1; } }
return d; }
int main() {
  int n;
  int count1=0;
  int count2=0;
  int j,x=1;
  scanf("%d",&n);
  for(j=0;j<n;j++) {
      scanf("%d",&a[j]);
      if(a[j]>n||a[j]<1) {
          x=0; } }
  if(x==1) {
  for(j=1;j<=n;j++) {
      if(count(j,n)==2) {
          count1=count1+1;
          if(count1==1) {
          printf("%d\n",j); } }
      if(count(j,n)==0) {
          count2=count2+1;
          if(count2==1) {
          printf("%d",j); } } } }
    return 0; }