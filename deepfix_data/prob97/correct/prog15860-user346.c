#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,l;
	for(i=n,j=0;i>0;i--,j++){
	    for(k=i;k<=n+j;k++){
	        if(l==i){
	        for(l=i;l>1;l--){
	            printf(" ");
	        }}
	            printf("%d",k%10); }
	    printf("\n"); }
	return 0; }