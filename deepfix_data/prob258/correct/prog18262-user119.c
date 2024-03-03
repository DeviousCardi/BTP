#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
if(i>0) {
	    if((s[i]>s[i-1]) && (s[i]>s[i+1]))
	    printf("Yes");
	    else printf("No"); }
	else {
	    if(s[i]>s[i+1])
	    printf("Yes");
	    else printf("No"); }
	return 0; }