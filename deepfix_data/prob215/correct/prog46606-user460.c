#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;long s=0;
	int i;
	scanf("%ld",&n);
	if(n==0) {
	    printf("NO");
	    return 0; }
	if(n==1) {
	    printf("YES");
	    return 0; }
	for(i=1;i<=n/2;i++) {
	    if(n%i==0) {
	        s=s+i; } }
	if(n==s)
	printf("YES");
	else
	printf("NO");
	return 0; }