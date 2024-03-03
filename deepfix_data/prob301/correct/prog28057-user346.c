#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,num[10000];
	scanf("%d\n",&n);
	int i,c1,c2,m;
	for(i=0;i<n;i++) {
	    scanf("%d",&num[i]); }
	for(i=0;i<n;i++) {
	if(i==0)
	{c1=0;
	 c2=1; }
	if(num[i]==num[i+1])
	c2++;
	else {
	if(c1<=c2)
	{c1=c2;
	 c2=1;
	 m=num[i]; }
	else {c1=c1;
	c2=1; } }
	} printf("%d",m);
	return 0; }