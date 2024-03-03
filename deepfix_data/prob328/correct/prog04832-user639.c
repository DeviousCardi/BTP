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
	int j,n,k,t;
	scanf("%d\n",&t);
	for(k=0;k<t;k++){
	scanf("%d\n",&k);
	printf("yes"); }
	return 0; }