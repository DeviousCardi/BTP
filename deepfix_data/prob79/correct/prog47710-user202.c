#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[10000];
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	    scanf("%d ",&t[i]);
	int al=0,bob=0,sum_al=0,sum_bob=0;
	i=0;
	while(al+bob<=n){
	    sum_al=sum_al+t[i];
	    al++;
	    sum_bob=sum_bob+t[n-1-i];
	    bob++;
	    i++; }
	printf("%d %d",al,n-bob);
	return 0; }