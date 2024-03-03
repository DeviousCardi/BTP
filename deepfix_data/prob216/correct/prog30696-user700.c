#include <stdio.h>
int fibo(int k) {
	if(k==1)
	return 0;
    if(k==2)
    return 1;
    return fibo(k-1) + fibo(k-2); }
int main() {
	int i,t,k;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
		scanf("%d ", &k);
	    printf("%d\n", fibo(k)); }
	return 0; }