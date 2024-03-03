#include <stdio.h>
int fibo(int k) {
	if(k==0)
	return 0;
    if(k==1)
    return 1;
    if(k>1)
    return fibo(k-1) + fibo(k-2); }
int main() {
	int i,t,k;
	scanf("%d", &t);
	for(i=0;i<t;i++) {
		scanf(" %d ", &k); }
	fibo(int k);
	printf("%d", &fibo);
	return 0; }