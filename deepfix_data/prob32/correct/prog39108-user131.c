#include <stdio.h>
#include <stdlib.h>
int main() {
	int s[19];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	  scanf("%d",&s[i]); }
	int k,temp;   temp=0;
	for (k=1;k<n-1;k++)  {
	    if (s[k-1]<s[k] && s[k]>s[k+1])
	    { }
	    else
	    { temp=1; } }
	if (temp==0)
	printf("Yes");
	else if (temp==1)
	printf("No");
	return 0; }