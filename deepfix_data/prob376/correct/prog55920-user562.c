#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	    if(n==2) return 2;
	    else
	    return  ((4*n)-6)*catalan(n-1)/n; }
int main() {
    int t,arr[20],i,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d\n",&arr[i]);
	for(i=0;i<t;i++){
	p=catalan(arr[i]);
	printf("%d\n",p); }
	return 0; }