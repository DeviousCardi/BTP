#include <stdio.h>
#include <stdlib.h>
int catalan(int a);
int main() {
	int n,t;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&n);
    	printf("%d\n",catalan(n)); }
	return 0; }
int catalan(int a) {
    if(a==1||a==0)
        return 1;
    else {
        int i,s=0;
        for(i=0;i<a;i++)
            s=s+catalan(i)*catalan(a-i-1);
        return s; } }