#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[10000];
	scanf("%d\n",&n);
	int i,sum=0;
	for(i=0;i<n;i++)
	    scanf("%d ",&t[i]);
	for(i=0;i<n;i++)
	    sum=sum+t[i];
	int al=0,bob=0,sum_al=0,sum_bob=0;
	i=0;
	while(al+bob<=n){
	    sum_al=sum_al+t[i];
	    sum_bob=sum_bob+t[n-1-i];
	    if(sum_al<=(sum/2))  al++;
	    if(sum_bob<=(sum/2))  bob++;
	    if(sum_al>(sum/2)  &&  sum_bob>(sum/2)){
	        if(sum_al<sum_bob)  al++;
	        else bob++;
	        break; }
	    i++; }
	printf("%d %d",al,bob);
	return 0; }