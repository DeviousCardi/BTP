#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int nos[n];
	int i,j,k=0;
	if(n==1)
	k=1;
	for(i=0;i<n;i++) {
	    scanf("%d",&nos[i]); }
	for(j=1;j<n-1;j++) {
	    if(nos[j]>nos[j-1] && nos[j]>nos[j+1])
	    {k=1;
	    break;} }
	if(k==1)
	printf("Yes");
	else
	printf("No");
	return 0; }