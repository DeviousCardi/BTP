#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k) {
    if(n<k)
      return 0;
    if(k==0)
      return 1;
    return binomial(n-1,k) + binomial(n-1,k-1); }
int main() {
	int b,i,j,flag=0;
	scanf("%d",&b);
	for(i=0;i<=20;i++) {
	    for(j=0;j<=i;j++) {
	        if(binomial(i,j)==b) {
	            flag=1;
	            printf("%d %d",n,k);
	            break; } }
	    if(flag==1)
	       break; }
	if(flag==0) {
	    printf("%d",-1); }
	return 0; }