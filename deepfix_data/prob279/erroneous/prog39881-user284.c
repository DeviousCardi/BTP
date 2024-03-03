#include <stdio.h>
int a[1000];
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
int j;
  scanf("%d",&n);
  for(j=0;j<n;j++) {
      scanf("%d",&a[j]); }
  for(j=1;j<=n;j++) {
      if(count(j,n)==2) {
      flag1=; }
      if(count(j,n)==0) {
          flag2=j; } }
  printf("%d\n",flag1);
  printf("%d",flag2);
    return 0; }