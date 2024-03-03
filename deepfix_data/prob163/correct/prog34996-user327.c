#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1, s2, i, min, max;
	char a[500], b[500], c[501],t;
	scanf("%d %d", &s1, &s2);
	printf("\n");
	if(s1<s2) min=s1;
	else min=s2;
	max=s1+s2-min;
	for(i=0;i<=max;i++)
	    c[i]=0;
	for(i=0;i<s1;i++)
	        scanf("%c", &a[i]);
	for(i=0;i<s2;i++)
	        scanf("%c", &b[i]);
	for(i=max-1;i>=0;i--) {
	       a[i-max+min]=a[i-max+min]-48;b[i]=b[i]-48;
	       t=a[i-max+min]+b[i]+c[i+1];
	       printf("%d \n",t);
	       c[i+1]=t%10;
	       c[i]=t/10; }
	 for(i=0;i<=max;i++) {
	            printf("%c", (c[i]+48)); }
	return 0; }