#include<stdio.h>
long int sum(long int y,long int x[]) {
  long int SUM=0;
  if(y==0)
  return 0;
  if(y>1) {
 SUM=x[y-1]+sum(y-1,x);
  return SUM; }
  if(y==1)
  return x[0]; }
int main() {
    long int sigma=0;
    long int n,a[1000000],i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    sigma=sum(n,a);
    printf("%ld",sigma);
    return 0; }