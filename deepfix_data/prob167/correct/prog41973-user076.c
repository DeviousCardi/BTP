#include<stdio.h>
long sum(long [], int);
int main() {
 int i,N;
   long a[100000],su;
  scanf("%d\n",&N);
  for(i=0;i<N;i++) {
      scanf("%ld ",&a[i]); }
  su=sum(a,N);
  printf("%ld",su);
    return 0; }
long sum(long a[],int N)
{ long p=0;
  int i;
 for(i=0;i<N;i++) {
    p=p+a[i]; }
    return (p); }