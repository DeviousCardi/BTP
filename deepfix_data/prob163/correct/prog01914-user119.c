#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,i,m,carry=0,x;char s[500],k[500],sum[600];
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
	scanf("%c",&s[i]);
	for(i=0;i<b;i++)
	scanf("%c",&k[i]);
	while(a>0 && b>0) {
	    for(m=0;1;m++) {
	    sum[m]=s[a]+k[b]+carry;
	    if(sum[m]>'9') {
	    sum[m]=10-sum[m];carry=1; }
	    a--;b--; }
	    m=x; }
	for(i=x-1;i>=0;i--)
	printf("%c",sum[i]);
	return 0; }