#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int t[n];
	int i;
	for(i=0;i<=n;i++) {
	        scanf("%d",&t[i]); }
	    int l=0;
	for(i=0;i<=n;i++)
	   { if((t[i]<t[i-1])&&(t[i]<t[i+1]))
	   l++; }
	   if(l!=0)
	   printf("Yes");
	   else
	   printf("No");
	return 0; }