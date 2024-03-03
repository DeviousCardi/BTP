#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    return 2*hanoi(n-1); }
int main() {
	int t, k, i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
	    scanf("%d\n", &k);
	    printf("%d\n",hanoi(k)-1); }
	return 0; }