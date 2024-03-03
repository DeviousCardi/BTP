#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else
    return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
	int i,j,t,k[20];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<t;i++) {
	    j=0;
	    while(cat(j+1)<k[i])
	    j++;
	    printf("%d\n",cat(j)); }
	return 0; }