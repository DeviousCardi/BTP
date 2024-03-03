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
	    long long n;int f=0;long long j=0;
	    scanf("%lld",&n);
	while(hanoi(j)<=n){
	    if(hanoi(j)==n){
	        f=1;
	        break; }
	    else
	    j++; }
	if(f==1)
	printf("yes\n");
	else
	printf("no\n"); }
	return 0; }