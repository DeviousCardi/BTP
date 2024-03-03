#include <stdio.h>
#include <stdlib.h>
int fibonacci(int k){
    if(k==1)
    return 0;
    if(k==2)
    return 1;
        return fibonacci(k-1)+fibonacci(k-2) ; }
int main() {
	int test;
	scanf("%d",&test);
	int i,k;
	for(i=0;i<test;i++){
	    scanf("%d\n",&k);
	int fibo;
	fibo=fibonacci(k);
	printf("%d",fibo); }
	return 0; }