#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==1)
    return 1;
    else
    return (cat(n-1)*2*(2*n-1))/(n+1); }
int main() {
	int t,i,k,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=0;;j++){
	        if(cat(j)>k){
	            printf("%d\n",cat(j-1));
	            break; } } }
	return 0; }