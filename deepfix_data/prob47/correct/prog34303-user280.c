#include <stdio.h>
#include <stdlib.h>
int fcatalan(int n) {
   if(n<=1)
    return 1;
    int resu=0;
    int i;
    for(i=0;i<n;i++)
        resu=fcatalan(i)*fcatalan(n-i-1);
        return resu; }
int main() {
	int k,t,sum=0,j,i;
	scanf("%d",&t);
	for(i=0;i<=t;i++){
	    scanf("%d",&k);
	    for (j=0;j<=100;j++){
	    printf("%d\n",fcatalan(j));
	sum=sum +fcatalan(j); }
	}printf("%d",sum);
	return 0; }