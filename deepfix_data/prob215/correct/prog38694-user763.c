#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,divisor[10000],sum;
	scanf("%d",&n);
	j=0;
	for(i=2;i<n;i++){
	    if(n%i==0)
	    {divisor[j]=i;
	    j++;} }
	    sum=1;
	    for(j=0;j<n;j++){
	        sum=sum+divisor[j]; }
	    if(sum==n)
	    printf("YES");
	    else printf("NO");
	return 0; }