#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[10000];
	scanf("%d\n",&n);
	int i,j,sum=0;
	for(i=0;i<n;i++)
	    scanf("%d ",&t[i]);
	for(i=0;i<n;i++)
	    sum=sum+t[i];
	int al=0,bob=0,sum_al=0,sum_bob=0;
	i=0;j=n-1;
	while(al+bob<=n){
	    if(sum_al<sum_bob){
	        sum_al=sum_al+t[i];
	        i++;  al++; }
	    else{
	        sum_bob=sum_bob+t[j];
	        j--;  bob++; } }
	printf("%d %d",al,bob);
	return 0; }