#include <stdio.h>
#include <stdlib.h>
int p(int n) {
    if(n)
        return 2*p(n-1);
    return 1; }
int main() {
	int n,t;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&n);
	    printf("%d\n",p(n)-1); }
	return 0; }