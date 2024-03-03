#include<stdio.h>
int main() {
  int i,N;
   long a[100000],sum=0;
  scanf("%d\n",&N);
  for(i=0;i<N;i++) {
      scanf("%ld ",&a[i]); }
  for(i=0;i<N;i++) {
      sum = sum+a[i]; }
  printf("%ld",sum);
    return 0; }