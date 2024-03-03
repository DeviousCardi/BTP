#include <stdio.h>
#include <stdlib.h>
long int catnum(int n){
    if(n==0) return 1;
    return 2*catnum(n-1)*(2*n-1)/(n+1); }
int main() {
    int i,lim=26;
    long int cat[lim];
    for(i=0;i<lim;i++){
        cat[i]=catnum(i); }
	int t,k,j;
	long int res;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    j=0;
	    while(cat[j]<k){
	        res=cat[j]; j++; }
	    printf("%ld\n",res); }
	return 0; }