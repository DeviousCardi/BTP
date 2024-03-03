#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,p,q;
	scanf("%d",&n);
	k=(n+1)/2;
	for(i=1;i<=k;i++){
	    for(j=1;j<=n;j++){
	        if(j<=k){
	        if(j>=i){
	            printf("*");
	        }else printf(" ");}
	        else if((n-j)>=(i-1)){
	            printf("*");
	        }else printf(" ");
	    }printf("\n"); }
	for(p=k+1;p<=n;p++){
	    for(q=1;q<=n;q++){
	        if(j<=k){
	            if(p<=q){
	                printf("*");
	            }else printf(" ");
	        }else
	        if(p<=(n-q)){
	            printf("*");
	        }else printf(" ");
	    }printf("\n"); }
	return 0; }