#include <stdio.h>
#include <stdlib.h>
 void fibbo(int n) {
        if(n==0)
        printf("1");
        else
        printf("%d",fibbo(n-1)+fibbo(n-2)); }
int main() {
	int i,t;
	scanf("%d\n",&t)
	int ar[10000];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&ar[i]); }
	for(i=0;i<t;i++) {
	    fibbo(ar[i]); }
	return 0; }