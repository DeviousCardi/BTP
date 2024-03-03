#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return 1+2*hanoi(n-1); }
int main() {
	int t,i;
	int test[1000];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test[i]);
	    printf("%d\n",hanoi(test[i])); }
	return 0; }