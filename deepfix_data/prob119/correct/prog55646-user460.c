#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==1)
    return 1;
    else
    return hanoi(n-1)+1; }
int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&n);
	    printf("%d",hanoi(n)); }
	return 0; }