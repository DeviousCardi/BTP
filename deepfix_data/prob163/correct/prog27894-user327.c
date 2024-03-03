#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1, s2, i, min, max,t;
	char a[500], b[500], c[501];
	scanf("%d %d", &s1, &s2);
	printf("\n");
	if(s1<s2) min=s1;
	else min=s2;
	max=s1+s2-min;
	c[max]=0;
	for(i=0;i<s1;i++)
	    scanf("%d", &a[i]);
	for(i=0;i<s2;i++)
	    scanf("%d", &b[i]);
	for(i=min-1;i>=0;i--) {
	       t=a[i]+b[i+max-min];
	       c[max+i-min+1]=c[max+i-min+1]+t%10;
	       c[max+i-min+2]=t/10; }
	 for(i=0;i<=max;i++) {
	        if(c[0]!=0)
	            printf("%d", c[i]); }
	return 0; }