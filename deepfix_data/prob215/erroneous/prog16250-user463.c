#include <stdio.h>
#include <stdlib.h>
int is_divisor(int i,int n) {
    if(i==0)
    return 0;
    if(n%i==0)
    return i;
    else
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(i=0;i<n;i++) {
      a[i]=is_divsor(i,n);
      sum=sum+a[i]; }
    if(sum==n)
    printf("YES");
    else
    printf("NO");
	return 0; }