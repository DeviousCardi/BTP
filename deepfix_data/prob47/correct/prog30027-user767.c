#include <stdio.h>
#include <stdlib.h>
int cataland(int n) {
    if(n==0) {
        return 1; }
    if(n==1) {
        return 1; }
    else
    return (2*(2*n-1)/(n+1))*cataland(n-1); }
int main() {
	int n,t,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n); }
	printf("%d",cataland(n));
	return 0; }