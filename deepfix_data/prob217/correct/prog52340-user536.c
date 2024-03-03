#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,s;
	int a[10000];
	scanf("%d/n",&n);
	for(i=0;i<=10000;i++)
    	{scanf("%d/n",&a[i]);}
		scanf("%d/n",&s);
	for(i=0;i<n;i++) {
	    for(j=n-1;j>=i;j--)
	   { if(a[i] +a[j]==s)
	      printf("%d%d/n",(a[i],a[j])); } }
	return 0; }