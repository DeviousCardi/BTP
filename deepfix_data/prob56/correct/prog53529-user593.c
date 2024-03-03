#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n<1)
    return 1;
    else
    return ((2*(2*n)+1)*cat(n-1))/(n+2); }
int main() {
	int i,j,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	   scanf("%d\n",&k);
	   j=1;
	   while(cat(j)==k)
	   {j++;}
	       if(k<cat(j))
	       printf("%d",cat(j)); }
	return 0; }