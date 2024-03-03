#include <stdio.h>
#include <stdlib.h>
int base(int n,int r){
    if ((n>=r) && (n=0,r=0))
    return 1;
       else
    return 0; }
int main() {
	int i,t,cat,n,r;
	n=0;
	r=0;
	scanf("%d",&n);
	cat=0;
	for(i=0;i<=n;i++){
	scanf("%d",&t);
	n=n*i;
	r=r*i;
	cat=n/(r*(n+1)); }
	printf("%d",cat);
	return 0; }