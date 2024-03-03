#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return(fibo(n-2)+fibo(n-1)); }
int main() {
    int i,t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
      scanf("%d",&k);
      printf("%d",fibo(k-1)); }
	return 0; }