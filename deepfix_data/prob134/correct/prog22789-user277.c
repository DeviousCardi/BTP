#include <stdio.h>
#include <stdlib.h>
int bin(int n, int k){
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else return bin(n-1,k)+bin(n-1,k-1); }
int main() {
	int i,j,b;
	scanf("%d",&b);
	for(i=0;i<20;i++){
	    for(j=0;j<30;j++){
	        if(bin(i,j)==b)
	    printf("%d %d",i, j); } }
     printf("-1");
	return 0; }