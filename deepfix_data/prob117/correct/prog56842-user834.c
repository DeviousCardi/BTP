#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long hanoi(long long x){
    if(x==1)
    return 1;
    else if(x<=0)
    return 0;
    return (2*hanoi(x-1)+1); }
int main() {
	long long t;
	scanf("%lld",&t);
	int i;
	for(i=0;i<t;i++){
	    long long n;
	    scanf("%lld",&n);
	if(hanoi(n)==0)
	printf("yes\n");
	else
	printf("no\n"); }
	return 0; }