#include <stdio.h>
#include <stdlib.h>
int akrmn_fn(int m,int n){
    if(m==0){ return n+1;}
    if(m>0&&n==0){ return akrmn_fn(m-1,1);}
    if(m>0&&n>0){ return akrmn_fn(m-1,akrmn_fn(m,n-1));} }
int main() {
	int k,i,j;
	scanf("%d",&k);
	for(i=0;i<4;i++){
	    for(j=0;j<6;j++){
	        if(k==akrmn_fn(i,j)){
	            break; } }
	     if(k==akrmn_fn(i,j)){
	            break; } }
	printf("%d %d",i,j);
	return 0; }