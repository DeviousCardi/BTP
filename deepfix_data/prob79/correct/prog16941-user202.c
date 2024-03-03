#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[10000];
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	    scanf("%d ",&t[i]);
	int al=0,bob=0,sum_al=0,sum_bob=0;
	while(i<=((n/2)+1)){
	    sum_al=sum_al+t[i];
	    al++;
	    sum_bob=sum_bob+t[n-1-i];
	    bob++; }
	printf("%d %d",al,bob);
	return 0; }