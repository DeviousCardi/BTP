#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    else
    return 2*hanoi(n-1)+1; }
int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&n);
	    printf("%d\n",hanoi(n)); }
	return 0; }