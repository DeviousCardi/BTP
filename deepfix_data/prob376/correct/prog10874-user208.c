#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
     int i,cat;
    if(n==0||n==1)
        return 1;
    else
    for(i=2;i<n;i++){
        cat=(n+i)/i*((n+i+1)/(i+1)); }
    return cat; }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }