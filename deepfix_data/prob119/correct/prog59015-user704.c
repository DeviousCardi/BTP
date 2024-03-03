#include <stdio.h>
#include <stdlib.h>
long int toh(int n)
{ if(n==1)return 1;
else if(n==0)return 0;
else  return 2*toh(n-1)+1;}
int main() {
	int i,j,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&j);
	    printf("%ld\n",toh(j)); }
	return 0; }