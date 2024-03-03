#include <stdio.h>
#include <stdlib.h>
int bin(int n, int k){
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else if
    return bin(n-1,k)+bin(n-1,k-1); }
int main() {
	int i,j,k=0,b;
	scanf("%d",&b);
	for(i=0;i<20;i++){
	    for(j=0;j<20;j++){
	        if(bin(i,j)==b){
	            k==1;break }
	        k==1;break }
	    k==1;
	    printf("%d %d",i, ,k); }
	else printf("-1");
	return 0; }