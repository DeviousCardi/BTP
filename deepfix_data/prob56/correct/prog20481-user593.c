#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n<1)
    return 1;
    else
    return ((4*n+2)*cat(n))/(n+2); }
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%d\n",&k);
	   j=1;
	   while(cat(j)<=k) {
	       j++; }
	       if(k<cat(j))
	       printf("%d\n",cat(j)); }
	return 0; }