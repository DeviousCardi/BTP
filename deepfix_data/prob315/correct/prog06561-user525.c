#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d \n",&n);
	int i,j,ar[1000],ar1[1000];
	int l;
	for(i=1;1<=n;i++)
	scanf("%d ",&ar[i]);
	for(i=1;1<=n;i++)
	ar1[i]=0;
	for(i=1;i<=n;i++) {
	    if(ar[i]<ar[i+1])
	    {ar[i]=l;
	       ar[i]=ar[i+1];
	       ar[i+1]=l;
	       ar1[i]=ar[i]+1; } }
	return 0; }