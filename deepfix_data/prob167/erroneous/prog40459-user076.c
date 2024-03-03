#include<stdio.h>
int main() {
  int sum1=0,sum2=0,sum=0,i,N;
   long a[1000000000];
  scanf("%d\n",&N);
  for(i=0;i<N;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<N/2;i++) {
      sum1 = sum1+a[i]; }
  for(i=N/2;i<N;i++) {
      sum2 = sum2+a[i]; }
  sum=sum1+sum2;
  printf("%d",sum); }
    return 0; }