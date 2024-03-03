#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1) return 1;
    else return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
	int i,j,k[j],l=1;
	scanf("%d",&j);
	for(i=0;i<j;i++){
	    scanf("%d",&k[i])
	while(cat(l)<=k[i]){
	    l=l+1; }
	if(cat(i-1)==k[i]) printf("yes");
	else printf("no"); }
	return 0; }