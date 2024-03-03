#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    int k,i,t;
    int sum=2;
    if((n==0)||(n==1))
    k=1;
    else {
      for(i=1;i<n;i++) {
      t=2*(catlan(n-i)-1);
      sum=sum+t; }
     k=sum; }
    return k; }
int main() {
    int i,t,k;
	scanf("%d",&t);
	int str[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&str[i]); }
    k=catlan(4);
    printf("%d",k);
	return 0; }