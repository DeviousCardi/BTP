#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],sum[501],size_a,size_b,i,carry,max,s;
	scanf("%d%d",&size_a,&size_b);
	for(i=0;i<500;i++)
	a[i]=b[i]=c[i]=0;
	c[500]=0;
	for(i=size_a-1;i>=0;i--)
	scanf("%d",&a[i]);
	for(i=size_b-1;i>=0;i--)
	scanf("%d",&b[i]);
	max=(a>=b)?a:b;
	for(i=0,carry=0;i<=max;i++) {
	    s=a[i]+b[i]+carry;
	    if(s>9) {
	        sum[i]=s%10;carry=1; }
	    else {
	        sum[i]=s;carry=0; }
	    for(i=max;i>=0;i--)
	    printf("%d",sum[i]); }
	return 0; }