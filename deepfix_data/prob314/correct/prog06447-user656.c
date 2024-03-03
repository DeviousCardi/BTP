#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,c[20],j;
	int s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%d",&c[j]); }
	if((s[c[0]]<s[c[1]])&&(s[c[t-1]]<s[c[t-2]]))
	return 0; }