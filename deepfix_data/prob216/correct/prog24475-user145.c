#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else return fibo(n-1)+fibo(n-2); }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",fibo(k)); } }