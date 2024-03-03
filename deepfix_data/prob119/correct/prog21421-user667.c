#include <stdio.h>
#include <stdlib.h>
int hanoi(int);
int main() {
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    printf("%d\n",hanoi(n)); }
	return 0; }
int hanoi(int n) {
    if(n==1)
     return 1;
    return 2*hanoi(n-1) +1; }