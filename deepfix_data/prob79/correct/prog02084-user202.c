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
	    sum_al=sum_al+t[i];
	    sum_bob=sum_bob+t[j];
	    if(sum_al<=(sum/2)){
	        al++;
	        i++; }
	    if(sum_bob<=(sum/2)){
	        bob++;
	        j--; }
	    if(sum_al>(sum/2)  &&  sum_bob>(sum/2)){
	        if(sum_al<sum_bob)  al++;
	        else bob++;
	        break; } }
	printf("%d %d",al,bob);
	return 0; }