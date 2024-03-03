#include <stdio.h>
#include <stdlib.h>
int cat(int n,int r)
if(n==0)
return 0;
if (n==1)
return 1;
else
return  cat((2*n)/(r*(n+1)));
int main() {
	int i,t,cat,n,r;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++){
	scanf("%d\n",&t);
	n=n*i;
	r=r*i;
	if (cat==(2*n)/(r*(n+1))); ;
	printf("%d",cat); }
	return 0; }