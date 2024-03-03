#include <stdio.h>
#include <stdlib.h>
int catalan(int k;int n) {
    int res=0;
    if(k==0 ||k==1)
     return 1;
    else
    for(i=0;i<n;i++)
     res+= catalan(i)*catalan(n-1-i);
    return res; }
int main() {
	int i,n, k;
	for(i=0;;i++) {
	    n=catalan(k,i);
	    if(n>k)
	     break; }
	printf("%d",i);
	return 0; }