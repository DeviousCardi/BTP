#include <stdio.h>
#include <stdlib.h>
int cat_num(int n) {
    int m;
    m=fac(2n)/(fac(n+1)*fac(n));
    return m; }
int main() {
	int t,k,res;
	scanf("%d",&t);
	int sum0=0;
	for(i=0;i<t;i++) {
	    scanf("%d",k);
	    if(k==0)
	    return 0;
	    for(j=0;j<k;j++) {
	       res=cat_num(j);
	       sumj+1=sumj+res; } }
	printf("%d",sum);
	return 0; }