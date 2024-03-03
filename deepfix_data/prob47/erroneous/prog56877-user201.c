#include <stdio.h>
#include <stdlib.h>
int cat(n){
    if(n==0) return 0;
    if(n==1) return 1;
return (()*cat(n-1); }
int main() {
    int t,k,i;
    scanf("%d",&t);
	for(i=1;i<=t;i++){scanf("%d", &k);
	printf("%d\n",cat(k)); }
	return 0; }