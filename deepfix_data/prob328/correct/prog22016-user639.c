#include <stdio.h>
#include <stdlib.h>
int fibo(int i){
 if(i==0)
 return 0;
 else if(i==1)
 return 1;
 else
 return (fibo(i)+fibo(i-1)); }
int main() {
	int j,n,k,t,flage=0;
	scanf("%d\n",&t);
	for(k=0;k<t;k++) {
	    scanf("%d\n",&n);
	    for(j=0;j<20;j++) {
	       if(n==fibo(j)) {
	      	printf("yes\n");
	      	flage=1;
	   	    break; }
	       if(flage!=1)
	       printf("no\n"); } }
	return 0; }