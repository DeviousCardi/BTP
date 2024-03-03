#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b;
	scanf("%d %d",&n,&b);
	int i,j,k,m=0;
	for(i=0;i<n;i++)
	{k=i+m;
	    for(j=0;j<b;j++) {
	        if(k<10)
	        printf("%d",k);
	        else printf("%d",k%10);
	        m++; } }
	return 0; }