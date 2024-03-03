#include <stdio.h>
#include <stdlib.h>
long is_divisor(long i,long n) {
    if(i==0)
    return 0;
    if(n%i==0)
    return i;
    else
    return 0; }
int main() {
    long n,i;
    scanf("%d",&n);
    long a[n];
    long sum=0;
    for(i=0;i<n;i++) {
      a[i]=is_divisor(i,n);
      sum=sum+a[i]; }
    if(sum==n)
    printf("YES");
    else
    printf("NO");
	return 0; }