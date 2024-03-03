#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==1) {
    return 1; }
    return 2*hanoi(n-1)+1; }
int main() {
	int t,i;
	scanf("%d",&t);
	for (i=0;i<t;i++) {
	    int x;
	    scanf("%d",&x);
	    printf("%d",hanoi(x)); }
	return 0; }