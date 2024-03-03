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
	int j,n,k,t,p,q=0;
	scanf("%d\n",&t);
	for(k=0;k<t;k++){
	scanf("%d\n",&n);
	for(j=0;j<20;j++){
	if(n==fibo(j))
	q=1; }
	if(q==1)
	printf("yes\n");
	else
	printf("no\n"); }
	return 0; }