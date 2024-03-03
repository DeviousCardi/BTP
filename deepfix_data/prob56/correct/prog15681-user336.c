#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int res=0,i;
    if(n==0 ||n==1)
     return 1;
    else
    for(i=0;i<n;i++)
     res+= catalan(i)*catalan(n-1-i);
    return res; }
int main() {
	int i,n, k;
	for(i=0;;i++) {
	    n=catalan(i);
	    if(n>k)
	     break; }
	printf("%d",i);
	return 0; }