#include <stdio.h>
#include <stdlib.h>
long long int hanoi(int n) {
    if(n==0) {
    return 0; }
    return 2*hanoi(n-1)+1; }
int main() {
	int t,i;
	scanf("%d",&t);
	for (i=0;i<t;i++) {
	    int x;
	    scanf("%d",&x);
	    printf("%lld\n",hanoi(x)); }
	return 0; }