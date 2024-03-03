#include <stdio.h>
#include <stdlib.h>
int fcatalan(int n) {
   if(n<=1)
    return 1;
    int resu=0;
    int i;
    for(i=0;i<n;i++)
        resu=resu+fcatalan(i)*fcatalan(n-i-1);
        return resu; }
int main() {
	int k,t,j,i,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    sum=0;
	    for (j=0;j<k;j++) {
	sum=sum+fcatalan(j); }
	printf("%d\n",sum); }
	return 0; }