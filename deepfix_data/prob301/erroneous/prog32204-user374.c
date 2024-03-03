#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int ind[n];int count[n]
	for(i=0;i<n;i++) {
	    scanf("%d",&ind[i]); }
	for(k=0;k<n;k++)
	{count[k]=0;
	    for(j=k+1;j<n;j++) {
	        if(ind[k]==ind[j])
	        count[k]=count[k]+1; } }
	return 0; }