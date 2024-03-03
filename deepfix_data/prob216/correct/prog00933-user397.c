#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n==1)
    return 0;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int main() {
	int t,k,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",fibonacci(k)); }
	return 0; }