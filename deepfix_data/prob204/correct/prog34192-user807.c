#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r,z=0,t=0;
	scanf("%d\n",&n);
	t=n;
	while(n!=0) {
	      r=n%10;
	      z=z*10+r;
	      n=n/10; }
	if(t==z) {
	        printf("YES"); }
	else {
	        printf("NO"); }
	return 0; }