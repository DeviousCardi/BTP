#include <stdio.h>
int main() {
	int d,n,arr[d];
	scanf("%d %d",&d,&n);
	i=0;
	while(i<d){
	    scanf("%d ",&arr[i]);
	    i+=1; }
	k=0;
	for(j=0;j<n){
	    arr[k]+=arr[j];
	    j+=1;
	    k=j; }
	printf("%d",arr[n-1]);
	return 0; }