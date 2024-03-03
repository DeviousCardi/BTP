#include <stdio.h>
#include <stdlib.h>
int cat(n){
    int l=0,i;
    if(n==0) return 1;
    for(i=0;i<n;i++) l=l+cat(i)*cat(n-1-i);
return l; }
int main() {
    int t,k,j,i,sum;
    scanf("%d",&t);
	for(i=1;i<=t;i++){scanf("%d", &k);
	sum=0;
	for(j=0;j<k;j++) sum=sum+cat(j);
	printf("%d\n",sum); }
	return 0; }