#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else if(n>=1)
    return ((4*n+2)*cat(n-1))/(n+2);
    else
    return 0; }
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%d\n",&k);
	   j=1;
	   while(cat(j)>=k) {
	   j=j; }
	       if(k<cat(j))
	       printf("%d\n",cat(j)); }
	return 0; }