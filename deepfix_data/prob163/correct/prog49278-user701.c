#include <stdio.h>
#include <stdlib.h>
int main() {
int a[500],b[500],sum[501],size_a,size_b,i,carry,max,s,j;
	scanf("%d%d",&size_a,&size_b);
	for(i=0;i<500;i++)
	{a[i]=0;b[i]=0;sum[i]=0;}
	sum[500]=0;
	for(i=size_a-1;i>=0;) {
	    j=getchar()-'0';
	    if(j>=0&&j<10) {
	        a[i]=j;
	        --i;
	        printf("%d",j); } }
    if(size_a>=size_b)
    max=size_a;
    else
    max=size_b;
	for(i=0,carry=0;i<=max;i++) {
	    s=a[i]+b[i]+carry;
	    if(s>9) {
	        sum[i]=s%10;carry=1; }
	    else {
	        sum[i]=s;carry=0; } }
	for(i=max;i>=0;i--)
	return 0; }