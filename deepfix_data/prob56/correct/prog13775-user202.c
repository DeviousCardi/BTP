#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    if(k==1)   return 1;
    else  return (n+k)/k*cat(n,k-1); }
int main() {
	int t,k[100];
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
	    scanf("%d",&k[i]); }
	int j;
	for(j=0;j<t;j++){
	    i=0;
	    while(cat(i,i)<=k[i]){
	        i++; }
	    printf("%d",cat(i+1,i+1)); }
	return 0; }