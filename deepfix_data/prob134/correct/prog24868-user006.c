#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k) {
    if(n<k)
      return 0;
    if(k==0)
      return 1;
    return binomial(n-1,k) + binomial(n-1,k-1); }
int main() {
	int b;
	scanf("%d",&b);
	return 0; }