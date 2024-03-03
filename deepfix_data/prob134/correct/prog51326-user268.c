#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k){
    if(n<k) {return 0;}
   if(n==0||k==0) {return 1;}
    return (binomial(n-1,k)+binomial(n-1,k-1)); }
int main() {
	int b,i,j,p=0;
	scanf("%d",&b);
	for(i=0;i<21;i++){
	    for(j=0;j<21;j++){
	        if(binomial(i,j)==b){
	            printf("%d %d",i,j);
	            p=p+1;
	            break; } }
	   if(p!=0) break; }
	if(p==0) printf("%d",-1);
	return 0; }