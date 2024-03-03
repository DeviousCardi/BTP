#include <stdio.h>
#include <stdlib.h>
int Catalan(int n);
int main() {
	int t,i;
	scanf("%d",&t);
	int temp;
	for(i=0;i<t;i++) {
	    scanf("%d\n",&temp);
	    printf("%d",Catalan(temp)); }
	return 0; }
int Catalan(int n) {
    if(n==0)
    return 1;
    if(n==2)
    return 1;
    else
    return n*Catalan(n-1); }