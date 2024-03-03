#include <stdio.h>
#include <stdlib.h>
int catalan(int a);
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",catalan(n));
	return 0; }
int catalan(int a) {
    if(n==1||n==0)
        return 1;
    else
        for(i=0;i<a;i++) {
            s=s+catalan(i)*catalan(a-i-1); }
    return s; }